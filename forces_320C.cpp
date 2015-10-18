#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;

    long double ans(long double comp,long long int b)
    {
    	long double ret;
    	long int k=2;
    	while((comp/k)>=b)
    	{
    		ret=comp/k;
    		k=k*2;
    	}
    	return ret;
    }

    long double nfoo(long long int a,long long int b)
    {
    	long double comp=(double)(a+b)/2;
    	return ans(comp,b);
    }

    long double foo(long long int a,long long int b)
    {
    	long double comp=(double)(a-b)/2;
    	return ans(comp,b);
    }
      
    int main(int argc, char const *argv[])
    {
    	long double a,b;
    	cin>>a>>b;
    	if (a==b)
    	{
    		cout<<(double)b<<endl;
    		return 0;
    		/* code */
    	}
    	if (a<b)
    	{
    		cout<<"-1"<<endl;
    		return 0;
    		/* code */
    	}
    	else
    	{
    		long long int  a1,a2;
    		a1 = nfoo(a,b);
    		a2 = foo(a,b);
    		//cout<<"a1 is "<<a1<<" and a2 is "<<a2<<endl;
    		cout<<min(a1,a2)<<endl;
    	}
    	return 0;
    }