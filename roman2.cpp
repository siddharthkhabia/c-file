#include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
#include <string>
    using namespace std;
    int main(int argc, char const *argv[])
    {
        string A;
        cin>>A;
        int ind;
        int sum;
        ind=0;
        int count=0;
        while(A[ind]=='M'){
                count++;
                ind++;
        }
        sum+=count*1000;
        count=0;
        while(A[ind]=='D'){
            count++;
            ind++;
        }
        sum+=count*500;
        count=0;
        if(A[ind]=='C'&&A[ind+1]=='M'){
            sum+=900;
            ind+=2;
        }
        if(A[ind]=='C'&&A[ind+1]=='D'){
            sum+=400;
            ind+=2;
        }
        while(A[ind]=='C'){
            count++;
            ind++;
        }
        sum+=count*100;
        count=0;
        while(A[ind]=='L'){
            count++;
            ind++;
        }
        sum+=count*50;
        count=0;
        if(A[ind]=='X'&&A[ind+1]=='C'){
            sum+=90;
            ind+=2;
        }
        if(A[ind]=='X'&&A[ind+1]=='L'){
            sum+=40;
            ind+=2;
        }
        while(A[ind]=='X'){
            count++;
            ind++;
        }
        sum+=count*10;
        count=0;
        if(A[ind]=='I'&&A[ind+1]=='X'){
            sum+=9;
            ind+=2;
        }
        if(A[ind]=='I'&&A[ind+1]=='V'){
            sum+=4;
            ind+=2;
        }
        if (A[ind]=='V')
        {
            sum+=5;
            ind++;
            /* code */
        }
        while(A[ind]=='I'){
            count++;
            ind++;
        }
        //cout<<ind<<" "<<sum<<endl;
        sum+=count*1;
        count=0;
        cout<<sum<<endl;
    	/* code */
    	return 0;
    }