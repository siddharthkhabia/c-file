#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    int ma(std::vector<int > &A,int a,std::vector<int > &tma,std::vector<int> &tmi,int *p);
    int max(int a,int b,int c)
    {
    	if (a>=b && a>=c)
    	{
    		return a;
    	}
    	else if (b>=a && b>=c)
    	{
    		return b;
    	}
    	else
    	{
    		return c;
    	}
    }
    int min(int a,int b,int c)
    {
    	if (a<=b && a<=c)
    	{
    		return a;
    	}
    	else if (b<=a && b<=c)
    	{
    		return b;
    	}
    	else
    	{
    		return c;
    	}
    }
    
    int mi(std::vector<int > &A,int a,std::vector<int > &tma,std::vector<int> &tmi,int *p)
    {
    	if (a==A.size()-1)
    	{
    		if ((*p)<A[a])
    		{
    			*p=A[a];
    		}
    		return A[a];
    	}
    	else if (tmi[a]!=INT_MIN)
    	{
    		return tmi[a];
    	}
    	else
    	{
    		tma[a]=max(A[a],A[a]*ma(A,a+1,tma,tmi,p),A[a]*mi(A,a+1,tma,tmi,p));
    		tmi[a]=min(A[a],A[a]*ma(A,a+1,tma,tmi,p),A[a]*mi(A,a+1,tma,tmi,p));
    		if (tma[a]>(*p))
    		{
    			*p=tma[a];
    		}
    		return tmi[a];
    	}
    }

    int ma(std::vector<int > &A,int a,std::vector<int > &tma,std::vector<int> &tmi,int *p)
    {
    	if (a==A.size()-1)
    	{
    		if ((*p)<A[a])
    		{
    			*p=A[a];
    		}
    		cout<<a<<" is a and ma is! "<<A[a]<<" mi is "<<A[a]<<"max uptil now is "<<*p<<endl;
    		return A[a];
    	}
    	else if (tma[a]!=INT_MIN)
    	{
    		cout<<a<<" is a and ma is !!"<<tma[a]<<" mi is "<<tmi[a]<<" max uptil now is "<<*p<<endl;
    		return tma[a];
    	}
    	else
    	{
    		tma[a]=max(A[a],A[a]*ma(A,a+1,tma,tmi,p),A[a]*mi(A,a+1,tma,tmi,p));
    		cout<<tma[a]<<endl;
    		tmi[a]=min(A[a],A[a]*ma(A,a+1,tma,tmi,p),A[a]*mi(A,a+1,tma,tmi,p));
    		if (tma[a]>(*p))
    		{
    			*p=tma[a];
    		}
    		cout<<a<<" is a and ma is "<<tma[a]<<" mi is "<<tmi[a]<<" max uptil now is "<<*p<<endl;
    		return tma[a];
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	std::vector<int > A;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    	}
    	std::vector<int> tma(A.size(),INT_MIN),tmi(A.size(),INT_MIN);
    	int max_p=INT_MIN;
    	int ans = ma(A,0,tma,tmi,&max_p);
    	cout<<max_p<<endl;
    	cout<<"max and min"<<endl;
    	for (int i = 0; i < tma.size(); ++i)
    	{
    		cout<<tma[i]<<"   "<<tmi[i]<<endl;
    	}
    	return 0;
    }