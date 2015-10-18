#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(string A,std::vector<int> &tab,int ind)
    {
    	if (ind>=A.size())
    	{
    		return 1;
    	}
    	if (tab[ind]>0)
    	{
    		return tab[ind];
    	}
    	else if ((A[ind]-48)>2)	
    	{
    		tab[ind]=foo(A,tab,ind+1);
    		return tab[ind];
    	}
    	else if ((A[ind]-48)==2)
    	{
    		if (ind==A.size()-1)
    		{
    			return 1;
    		}
    		else if (A[ind+1]-48 == 0)
    		{
    			tab[ind]=foo(A,tab,ind+2);
    			return tab[ind];
    		}
    		else if ((A[ind+1]-48)>6)
    		{
    			tab[ind]=foo(A,tab,ind+1);
    			return tab[ind];
    		}
    		else
    		{
    			tab[ind]=foo(A,tab,ind+1)+foo(A,tab,ind+2);
    			return tab[ind];
    		}
    	}
    	else if ((A[ind]-48)==1)
    	{
    		if (ind==A.size()-1)
    		{
    			return 1;
    		}
    		else if (A[ind+1]-48 == 0)
    		{
    			tab[ind]=foo(A,tab,ind+2);
    			return tab[ind];
    		}
    		else
    		{
    			tab[ind]=foo(A,tab,ind+1)+foo(A,tab,ind+2);
    			return tab[ind];
    		}
    	}

    }
      
    int main(int argc, char const *argv[])
    {
		string A;
		cin>>A;
		std::vector<int> tab(A.size(),-1);
		int now;
		now=foo(A,tab,0);   	
    	cout<<now<<endl;
    	return 0;
    }