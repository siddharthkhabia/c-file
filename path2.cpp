#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<std::vector<int> > &A,std::vector<std::vector<int> > &tab,int m,int n)
    {

    	if (tab[m][n]!=-1)
    	{
    		return tab[m][n];
    	}
    	else
    	{
    		int c=0;
    		if (m-1>=0 && A[m-1][n]==0)
    		{
    			c+=foo(A,tab,m-1,n);
    		}
    		if (n-1>=0 && A[m][n-1]==0)
    		{
    			c+=foo(A,tab,m,n-1);
    		}
    		tab[m][n]=c;
    		return c;
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int m,n;
    	cin>>m>>n;
    	std::vector<int> v(n,0);
    	std::vector<std::vector<int> > A(m,v);
    	for (int i = 0; i < A.size(); ++i)
    	{
    		for (int j = 0; j < A[0].size(); ++j)
    		{
    			cin>>A[i][j];
    		}
    	}
    	std::vector<int> p(A[0].size(),-1);
    	std::vector<std::vector<int> > tab(A.size(),p);
    	tab[0][0]=1;
    	int k=foo(A,tab,A.size()-1,A[0].size()-1);
    	cout<<k<<endl;
    	return 0;
    }