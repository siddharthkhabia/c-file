#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int isp(string A,std::vector<std::vector<int> > &t,int a,int b)
    {
    	for (int i = a; i <= (a+b)/2; ++i)
    	{
    		if (A[i]!=A[b-i+a])	
    		{
    			t[a][b]=0;
    			return 0;
    		}

    	}
    	t[a][b]=1;
    	return 1;

    }

    int foo(string A,std::vector<std::vector<int> > &t,std::vector<int > &tab,int a,int b)
    {
    	if (tab[a]>=0)
    	{
    		return tab[a];
    	}
    	else if (isp(A,t,a,b)==1)
    	{
    		return 0;
    	}
    	else
    	{
    		int c=INT_MAX;
    		for (int i = a; i < b; ++i)
    		{
    			if(isp(A,t,a,i)==1)
	    		{	
	    			if( (1+foo(A,t,tab,i+1,b)) < c)
	    			{
	    				c=(1+foo(A,t,tab,i+1,b));
	    			}
	    		}
    		}
    		tab[a]=c;
    		return c;
    	}
    }   


    int main(int argc, char const *argv[])
    {
    	string A;
    	cin>>A;
    	std::vector<int> v(A.size(),-1);
    	std::vector<std::vector<int> > t(A.size(),v);
    	std::vector<int> tab(A.size(),-1);
    	int c = foo(A,t,tab,0,A.size()-1);
    	//cout<<isp(A,t,0,1);
    	cout<<c<<endl;
    	return 0;
    }