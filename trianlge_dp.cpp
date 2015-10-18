#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<std::vector<int> > &A,int row,int col,std::vector<std::vector<int> > &tab)
    {
    	if (row==A.size()-1)
    	{
    		return A[row][col];
    	}
    	else if (tab[row][col]>0)
    	{
    		return tab[row][col];
    		/* code */
    	}
    	else
    	{
    		int k = A[row][col] + min(foo(A,row+1,col,tab),foo(A,row+1,col+1,tab));
    		tab[row][col]=k;
    		return k;
    		
    	}
    }
      
    int main(int argc, char const *argv[])
    {

    	int n;
    	cin>>n;
    	std::vector<std::vector<int> > A(n);

    	for (int i = 0; i < A.size(); ++i)
    	{
    		for(int j=0 ; j<1+i ; ++j)
    		{
    			int temp;
    			cin>>temp;
    			A[i].push_back(temp);
    		}
    	}
    	std::vector<int> v(A.size(),0);
    	std::vector<std::vector<int> > tab(A.size(),v);
    	int ans = foo(A,0,0,tab);
    	cout<<ans<<endl;
    	
    	return 0;
    }