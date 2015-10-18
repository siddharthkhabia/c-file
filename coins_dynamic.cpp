#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    ////**************************this programs gives all permutations ie 1,2 and 2,1 are different for it******************************************////
    int foo(std::vector<int> &v,int n,std::vector<int> &p)
    {
    	if(p[n] > -1)
    	{
    		return p[n];
    	}
    	else
    	{
    		int count=0;
    		for (int i = 0; i < v.size(); ++i)
    		{
    			if (n-v[i]>0)
    			{
    				count+=foo(v,n-v[i],p);
    				/* code */
    			}
    			else if(n==v[i])
    			{
    				count++;
    			}
    			else
    			{
    				break;
    			}
    		}
    		p[n]=count;
    		return count;
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	int m;
    	cin>>m;
    	std::vector<int > v;
    	for (int i = 0; i < m; ++i)
    	{
    		int temp;
    		cin>>temp;
    		v.push_back(temp);
    		/* code */
    	}
    	std::vector<int> p(n+1,-1);
    	p[0]=0;
    	//cout<<"working"<<endl;
    	int c = foo(v,n,p);
    	cout<<c<<endl;
    	return 0;
    }