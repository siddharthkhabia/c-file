#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(std::vector<int> &A,int a,int v,std::vector<int> &tab)
    {
    	if (tab[a]!=-1)
    	{
    		return tab[a];
    	}
    	else
    	{
    		int ms=0;
    		for (int i = 0; i < a; ++i)
    		{
    			if (A[i]<A[a])
    			{
    				if (tab[i]>ms)
    				{
    					ms=tab[i];
    				}
    			}
    		}
    		ms++;
    		tab[a] = ms;
    		return ms;
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int temp=0;
    	cin>>temp;
    	std::vector<int > A;
    	while(temp!=-1)
    	{
 
    		A.push_back(temp);
    		cin>>temp;
    	}
    	std::vector<int> tab(A.size()+1,-1);
    	tab[0]=1;
    	int ans=0;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		int temp;
    		temp =foo(A,i,INT_MIN,tab);
    		if (temp>ans)
    		{
    			ans=temp;
    		}
    	}
    	cout<<ans<<endl;   	
    	
    	return 0;
    }