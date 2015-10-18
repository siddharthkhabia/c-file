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

    	int n;
    	int m;
    	cin>>n>>m;
    	if(n==1)
    	{
    		cout<<"1"<<endl;
    		return 0;
    	}
    	std::vector<int> v;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		v.push_back(temp);
    		/* code */
    	}
    	std::vector<int> r(n,0);
    	r[0]=1;
    	std::vector<int> c(n,0);
    	c[0]=v[0];
    	for (int i = 0; i < n-1; ++i)
    	{
    		int t1,t2;
    		cin>>t1>>t2;
    		if (c[t1-1]>m)
    		{
    			c[t2-1]=m+1;    			
    		}
    		else
    		{
	    		if(v[t2-1]==1)
	    		{
	    		c[t2-1]=c[t1-1]+1;
	    		}
	    		else
	    		{
	    			c[t2-1]=0;
	    		}
    		}
    		r[t1-1]=1;
    		/* code */
    	}
    	int count=0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (r[i]==0)
    		{
    			if(c[i]<=m)
    			{
    				count++;
    			}
    		}
    	}
    	cout<<count<<endl;
    	return 0;
    }