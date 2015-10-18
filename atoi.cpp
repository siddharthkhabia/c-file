#include <iostream>
#include <limits.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
#include <string>
    using namespace std;
    int main(int argc, char const *argv[])
    {
    	/* code */
        string A="  +99a5 opds";
        //cin>>A;

        int i=0;
        while(A[i]==' '){

            i++;
        }
        int sum;
        if ((A[i]<48||A[i]>57)&&A[i]!='-'&&A[i]!='+')
        {
            cout<<"0"<<endl;
            return 0;
            /* code */
        }else if(A[i]==45){
            i++;
            sum=0;
            while(A[i]>47&&A[i]<58){
                int temp=sum;
                temp=temp*10-(A[i]-48);
                if((temp+(A[i]-48))/10==sum){
                    sum=temp;
                }else{
                    cout<<"INT_MIN"<<endl;
                    break;
                    return INT_MIN;
                }
                i++;
            }   
        }
        else if(A[i]=='+'){
            i++;
            sum=0;
            while(A[i]>47&&A[i]<58){
                int temp=sum;
                temp=temp*10+(A[i]-48);
                if((temp-(A[i]-48))/10==sum){
                    sum=temp;
                }else{
                    cout<<"INT_MAX"<<endl;
                    break;
                    return INT_MAX;
                }
                i++;
            }

        }else{
            sum=0;
            while(A[i]>47&&A[i]<58){
                int temp=sum;
                temp=temp*10+(A[i]-48);
                if((temp-(A[i]-48))/10==sum){
                    sum=temp;
                }else{
                    cout<<"INT_MAX"<<endl;
                    break;
                    return INT_MAX;
                }
                i++;
            }

        }
        cout<<sum<<endl;
    	return sum;
    }