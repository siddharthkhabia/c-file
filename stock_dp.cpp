#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    pair<pair<int,int>,int> foo(std::vector<int> A,int a,int b)
    {
    	
    	int count=0;
    	int m=0;
    	int ind1,ind2,ic=0;
    	std::vector<int > v;
    	for (int i =a+1 ; i <=b; ++i)
   		{
    		v.push_back(A[i]-A[i-1]);
    	}
    	for (int i = 0; i < v.size(); ++i)
    	{
    		if (count+v[i]>0)
    		{
    			count+=v[i];
    			if (count>m)
	    		{	
	    			m=count;
	    			ind1=i+1+a;
	    			ind2=ic;
	    		}
    		}
    		else
    		{
    			ic=i+1+a;
    			count=0;
    		}

    	}
    	pair<pair<int,int>,int> p;
    	p.first.first=ind2;
    	p.first.second=ind1;
    	p.second=m;
    	return p;
    }
     
     int foo1(std::vector<int> &A,int a,int b)
     {
     	if (a>=b)
     	{
     		return 0;
     		/* code */
     	}
     	else
     	{
	     		int count=0;
	    	int m=0;
	    	
	    	std::vector<int > v;
	    	for (int i =a+1 ; i <=b; ++i)
	   		{
	    		v.push_back(A[i]-A[i-1]);
	    	}
	    	for (int i = 0; i < v.size(); ++i)
	    	{
	    		if (count+v[i]>0)
	    		{
	    			count+=v[i];
	    			if (count>m)
		    		{	
		    			m=count;
		    		}
	    		}
	    		else
	    		{
	    			//ic=i+1+a;
	    			count=0;
	    		}

	    	}
	    	return m;

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

    	pair<pair<int,int>,int> a;
    	a=foo(A,0,A.size()-1);
    	int m=a.second;
    	m+= max(foo1(A,0,a.first.first - 1),foo1(A,a.first.second+1,A.size()-1));
    	cout<<m<<endl;
    	return 0;
    }