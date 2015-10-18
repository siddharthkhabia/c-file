#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    
    int foo(int n,std::vector<int> &tab)
    {
    	if (n==0)
    	{
    		return 1;
    	}
    	else if (tab[n]>-1)
    	{
    		return tab[n];
    	}
    	else
    	{
    		int count=2;

    		for (int i = 2; i < n; i=i+2)
    		{
    			if (i==2)
    			{
    				count+= ((3 * foo(n-i,tab)));
    			}
    			else
    			{
    				count+= ((2 * foo(n-i,tab)));
    			}
    		}
    		tab[n]=count;
    		return tab[n];
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	std::vector<int> tab(31,-1);
    	tab[2]=3;
    	while(1)
    	{
    		cin>>n;
    		if (n==-1)
    		{
    			break;
    		}
    		else if (n&1)
    		{
    			cout<<"0"<<endl;
    		}
    		else
    		{
    			cout<<foo(n,tab)<<endl;
    		}
    	}
    	return 0;
    }