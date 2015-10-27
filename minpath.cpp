#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
      
     int foo(int a,int b,std::vector<std::vector<int> > &A,std::vector<std::vector<int> > &tab)
     {

     	if (a>=A.size()||b>=A[0].size())
     	{
     		return INT_MAX;
     	}
     	if(a==A.size()-1 && b==A[0].size()-1)
     	{
     		return A[a][b];
     	}
     	else if (tab[a][b]!=-1)
     	{
     		return tab[a][b];
     	}
     	else
     	{
     		tab[a][b]= A[a][b]+ min(foo(a+1,b,A,tab),foo(a,b+1,A,tab));
     		return tab[a][b];
     	}

     }

    int main(int argc, char const *argv[])
    {
        
        
        int n;
        cin>>n;
        std::vector<std::vector<int > > A(n);
        int m;
        cin>>m;
        for (int i = 0; i < n; ++i)
        {
        	for (int j = 0; j < m; ++j)
        	{
    			int temp;
    			cin>>temp;
    			A[i].push_back(temp);
        	}
        }

        std::vector<int> v(A[0].size(),-1);
        std::vector<std::vector<int> > tab(A.size(),v);
        int m_p=foo(0,0,A,tab);
		cout<<m_p<<endl;
		return 0;
    }