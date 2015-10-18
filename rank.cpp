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
    	string A;
    	cin>>A;
    	if (A.size()==1)
    	{
    		cout<<"1"<<endl;
    		return 0;
    		/* code */
    	}
    	std::vector<int> v(52,0);
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (A[i]<97)
    		{
    			v[A[i]-65]++;
    		}else
    		{
    			v[A[i]-71]++;
    		}
    	}
    	long long int ans=0;
    	int mod=1000003;
    	std::vector<int> fac(A.size()-1);
    	int val=1;
    	for (int i = 0; i < fac.size(); ++i)
    	{
    		fac[i]=val;
    		val=((val%mod)*(i+2)%mod)%mod;
    	}
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (A[i]<97)
    		{
    			long long int s=0;
    			for(int j=0;j<(A[i]-65);j++)
    			{
    				s+=v[j];
    				s=s%mod;
    			}
    			ans+=(s*(fac[A.size()-i-2]))%mod;
    			ans=ans%mod;
    			v[A[i]-65]--;

    		}else
    		{
    			long long int s=0;
    			for(int j=0;j<(A[i]-71);j++)
    			{
    				s+=v[j];
    				s=s%mod;
    			}
    			ans+=(s*(fac[A.size()-i-2]))%mod;
    			ans=ans%mod;
    			v[A[i]-71]--;
    		}
    	}
    	cout<<(ans+1)%mod<<endl;
    	return 0;
    }