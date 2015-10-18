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
     	if (a==b)
     	{
     		return 0;
     	}
     	else if (a==b-1)
     	{
     		return 0;
     		/* code */
     	}
     	else if (tab[a][b]>0)
     	{
     		return tab[a][b];
     	}
     	else
     	{
     		int min = INT_MAX;
     		for (int i = a+1; i < b; ++i)
     		{
     			int c = foo(A,a,i,tab)+foo(A,i,b,tab)+(A[a]*(A[i]*A[b]));
     			if (min>c)
     			{
     				min=c;
     			}
     		}
     		tab[a][b]=min;
     		return min;
     	}
     } 



    int main(int argc, char const *argv[])
    {
    	std::vector<int> A;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		 int temp;
    		 cin>>temp;
    		 A.push_back(temp);
    	}    
    	std::vector<int> v(A.size(),0);
    	std::vector<std::vector<int> > tab(A.size(),v);	
    	int c = foo(A,0,A.size()-1,tab);
    	cout<<c<<endl;
    	return 0;
    }