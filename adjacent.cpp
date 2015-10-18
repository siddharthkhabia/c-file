#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<std::vector<int> > &A,std::vector<int> &v,int a)
    {
    	if (v[a]!=-1)
    	{//cout<<"foo"<<endl;
    		return v[a];
    	}
    	else if (a<A[0].size()-2)
    	{
    		int c1=0,c2;
    		c1 = max(A[0][a],A[1][a]);
    		c1+= foo(A,v,a+2);
    		c2 = foo(A,v,a+1);
    		v[a]=max(c1,c2);
    		//cout<<a<<" has this value "<<v[a]<<endl;
    		return v[a];
    	}
    	
    	else 
    	{
    		int c1=0;
    		c1 = max(A[0][a],A[1][a]);
    		v[a]=c1;
    		if (a+1<A[0].size())
    		{
    			int c2 = max(A[0][a+1],A[1][a+1]);
    			v[a]=max(c1,c2);
    		}
    		//cout<<a<<" has this value "<<v[a]<<endl;

    		return v[a];
    	}

    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	std::vector<std::vector<int> > A(2);
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A[0].push_back(temp);
    		cin>>temp;
    		A[1].push_back(temp);
    	}

    	std::vector<int> v(A[0].size(),-1);

    	int r=foo(A,v,0);
    	cout<<r<<endl;
    	
    	return 0;
    }