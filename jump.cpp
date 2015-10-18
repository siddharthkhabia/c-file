#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    int min(int a,int b)
    {
    	if (a>b)
    	{
    		return b;	

    	}
    	else
    	{
    		return a;
    	}
    }
    int foo(std::vector<int> &A,std::vector<int > &tab,int a)
    {

    	if (a>=A.size()-1)
    	{
    		return 0;
    	}
    	if (tab[a]>-1)
    	{
    		return tab[a];
    	}
    	else if (A[a]==0)
    	{
    		return (INT_MAX);
    	}
    	else
    	{
    		int m=INT_MAX;	
    		for (int i = 1; i <= min(A[a],(A.size()-1)); ++i)
    		{
    			int c=0;
    			c = (foo(A,tab,a+i));
    			if (c==INT_MAX)
    			{
    				continue;
    			}
    			else
    			{
    				c++;
    			}
    			if (c<m)
    			{
    				m=c;
    			}
    		}
    		tab[a]=m;
    		return tab[a];
    	}

    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	std::vector<int> A;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    	}
    	std::vector<int> tab(A.size(),-1);
    	//std::vector<std::vector<int> > tab(A.size(),v);

    	int k;
    	k=foo(A,tab,0);
    	if (k==INT_MAX)
    	{
    		cout<<"-1"<<endl;
    	}
    	else
    	{
    		cout<<k<<endl;
    	}
    	return 0;
    }