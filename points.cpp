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
    	cin>>n;
    	std::vector<int> A;
    	std::vector<int> B;
    	for (int i = 0; i < n; ++i)
    	{
    		int x,y;
    		cin>>x>>y;
    		A.push_back(x);
    		B.push_back(y);
    	}
    	if (A.size()==0)
    	{
    		return 0;
    		/* code */
    	}
    	std::vector<pair<float,float> > hash;
    	std::vector<int> v((A.size()*A.size()),1);
    	for (int i = 0; i < A.size()-1; ++i)
    	{
    		int counter=0;
    		for(int j=i+1;j<A.size();j++)
    		{	

    			if (A[i]==A[j]&&B[i]==B[j])
    			{
    				counter++;    				
    			}
    		}
    		for(int j=0;j<v.size();j++)
    		{
    			v[i]+=counter;
    		}
    		for(int j=i+1;j<A.size();j++)
    		{
    			if (!(A[i]==A[j]&&B[i]==B[j]))
    			{
	    			float c;
	    			float a;
	    			if ((A[i]-A[j])==0)
	    			{
	    				a=999999.9;
	    				/* code */
	    			}
	    			else
	    			{
	    			a=((float)(B[i]-B[j])/(A[i]-A[j]));
	    			}
	    			if ((A[i]-A[j])==0)
	    			{
	    				c=-A[j];
	    				//c=c*(-1);
	    				//c
	    			}
	    			else{
	    			c=(B[j]-a*A[j]);
	    			}
	    			pair <float ,float> p;
	    			p=make_pair(c,a);
	    			int flag=0;
	    			for(int k=0;k<hash.size();k++)
	    			{
	    				if (hash[k]==p)
	    				{
	    					flag=1;
	    					v[k]+=1;
	    				}
	    			}
	    			if (flag==0)
	    			{
	    				hash.push_back(p);
	    				//v[hash.size()-1]+=counter;
	    			}
    			}

    		}
    		/* code */
    	}
    	int max=0;
    	for (int i = 0; i < hash.size(); ++i)
    	{
    		if (v[i]>max)
    		{
    			max=v[i];
    			/* code */
    		}
    	}
    	for (int i = 0; i < hash.size(); ++i)
    	{
    		cout<<hash[i].first<<" "<<hash[i].second<<"\t";
    		cout<<v[i]<<endl;
    		/* code */
    	}
    	max=8*max;
    	max++;
    	max=sqrt(max);
    	max--;
    	max/=2;
    	max++;
    	cout<<"the answer is :"<<max<<endl;
    	return 0;
    }