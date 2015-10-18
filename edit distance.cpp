#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int min(int a,int b,int c)
    {
    	if(a<=b && a<=c)
    	{
    		return a;
    	}
    	else if (b<=a && b<=c)
    	{
    		return b;
    		/* code */
    	}
    	else
    	{
    		return c;
    	}
    }

    int foo(int s1,int s2, string A,string B, std::vector<std::vector<int> > &tab)
    {
    	if (s1==A.size())
    	{
    		return (B.size()-s2);
    	}
    	else if (s2==B.size())
    	{
    		return (A.size()-s1);
    		/* code */
    	}
    	else if (tab[s1][s2]>0)
    	{
    		return tab[s1][s2];
    	}
    	else
    	{
    		if (A[s1]==B[s2])
    		{
    			int k = (foo(s1+1,s2+1,A,B,tab));
    			tab[s1][s2]=k;
    			return k;
    		}
    		else
    		{
    			int k = 1+min((foo(s1+1,s2+1,A,B,tab)),(foo(s1,s2+1,A,B,tab)),(foo(s1+1,s2,A,B,tab)) );
    			tab[s1][s2]=k;
    			return k;
    		}
    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	string A,B;
    	cin>>A>>B;
    	std::vector<int> v(B.size(),-1);
    	std::vector<std::vector<int> > tab(A.size(),v);
    	int c = foo(0,0,A,B,tab);
    	cout<<c<<endl;
    	
    	return 0;
    }