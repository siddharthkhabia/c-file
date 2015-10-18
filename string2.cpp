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
    	string A="cristiano ronaldo ";
        //cin>>A;
        int c=0;
        int k=A.size()-1;
        while(A[k]==' '){
            k--;
        }
        for (int i = k; i >=0; --i)
        {
            //cout<<i<<endl;
            if (A[i]==' ')
            {
                break;
                /* code */
            }else{
                c++;
            }
            /* code */
        }
        cout<<c<<endl;
        /* code */
    	return 0;
    }