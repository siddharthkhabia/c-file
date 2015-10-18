#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	int A,B,C;
    	cin>>A>>B>>C;
    	int ans=1,ind=1;
    	if (C==1)
    	{
    		cout<<"0";
    		return 0;
    		/* code */
    	}
    	if(B==0){
    		return 1%C;
    	}
    	int val=1;
    	int ar[32];
    	ar[0]=1%C;
    	int c=A%C;
    	if (A<0)
    	{
    		c=C+A%C;
    		/* code */
    	}
    	ar[1]=c;
    	while(ind<B){
    		c*=c;
    		c%=C;
    		ind=ind*2;
    		val++;
    		ar[val]=c;
    	}
    	ind=1;
    	while(B){
    		if(B&1){
    			ans*=ar[ind];
    			ans%=C;
    		}
    		B=B>>1;
    		ind++;
    	}
    	for (int i = 0; i < 5; ++i)
    	{
    		cout<<ar[i]<<endl;;
    		/* code */
    	}
    	cout<< "answer is "<<ans<<endl;
    	return ans;
    }