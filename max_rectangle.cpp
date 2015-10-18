#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<int> &A,std::vector<std::vector<int> > &tab,int a,int b,int *mt)
    {
    	if (tab[a][b]>0)
    	{
    		return (tab[a][b]);
    	}
    	else if (a==b)
    	{
    		tab[a][b]=A[a];
    		if (*mt < A[a])
    		{
    			*mt = A[a];
    		}
    		return A[a];
    	}
    	else
    	{
    		int k = min(A[a],foo(A,tab,a+1,b,mt));
    		tab[a][b] = k;
    		if (*mt < (k*((b-a)+1)))
    		{
    			*mt = k*((b-a)+1);
    		}
    		return k;
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
    	std::vector<int> v(A.size(),0);
    	std::vector<std::vector<int> > tab(A.size(),v);
    	int ans=0;
    	int *mt;
    	mt=&ans;
    	for (int i = A.size()-1; i >=0 ; --i)
    	{
    		int k=foo(A,tab,0,i,mt);
    	}
    	// for (int i = 0; i < A.size(); ++i)
    	// {
    	// 	for (int j = 0; j < tab[i].size(); ++j)
    	// 	{
    	// 		cout<<tab[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
    	cout<<ans<<endl;
    	return 0;
    }