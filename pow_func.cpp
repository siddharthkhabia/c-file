#include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main(int argc, char const *argv[])
    {   
        int n,d,x;
        cin>>x>>n>>d;
    	if(n==0){
        return 1%d;
    }else if (x==1){
        return 1%d;
    }
    else if (n==1){
       if(x>0)
        return x%d;
        else
        return d+(x%d);
    }
    else{
    long long int pow[20];
    if (x<0)
    {
        pow[0]=x%d + d;
    }
    else
    {
    pow[0]=(x%d);
    }
        for (int i = 1; i < 20; ++i)
        {
            pow[i]=(pow[i-1]*pow[i-1])%d;
            /* code */
        }
        long long int ans=1;
        int c=0;
        while(n>0){
            if (n&1)
            {
                ans=(ans*pow[c])%d;
                /* code */
            }
            n=n>>1;
            c++;
        }
        cout<< (int)(ans%d)<<endl;
    }
    	return 0;
    }