#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<int> &A,int a,int b,std::vector<std::vector<int> > &tab)
    {
    	if (a>=b)
    	{
    		return 0;
    	}
    	else if (tab[a][b]>=0)
    	{
    		return tab[a][b];
    	}
    	else
    	{
    		
    		int c1=A[a];
    		if (A[a+1]>A[b])
    		{
    			c1+=foo(A,a+2,b,tab);
    		}
    		else
    		{
    			c1+=foo(A,a+1,b-1,tab);
    		}

    		int c2=A[b];
    		if (A[a]>A[b-1])
    		{
    			c2+=foo(A,a+1,b-1,tab);
    		}
    		else
    		{
    			c2+=foo(A,a,b-2,tab);
    		}
    		tab[a][b]=max(c1,c2);
    		return tab[a][b];
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
		    		cin>>temp;
		    		A.push_back(temp);
		    	}    	
		std::vector<int> v(A.size(),-1);
		std::vector<std::vector<int> > tab(A.size(),v);
		int c=foo(A,0,A.size()-1,tab);
		cout<<c<<endl;
    	return 0;
    }