#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(string A,int B,int ind,int pos,std::vector<std::vector<int> > &tab)
    {
    	if(pos>B)
    	{
    		return 0;    	    	
    	}

    	if (pos==B)
    	{

    		for (int i = ind; i < A.size(); ++i)
    		{
	    			if (A[i]=='W')
	    			{
	    				w++;
	    			}else
	    			{
	    				b++;
	    			}
	    		
	    		//cout<<"returning : "<<sum<<" "<<w<<" "<<b<<endl;
	    		
    		}
    		int sum=w*b;
    		return sum;
    	}
    	else if (tab[pos][ind] < INT_MAX)
    	{
    		return tab[pos][ind];
    	}
    	else
    	{
    		int minv=INT_MAX;
    		for (int i = ind; i < A.size()-B+pos; ++i)
    		{
	    		if (A[i]=='W')
	    		{
	    			w++;
	    		}
	    		else
	    		{
	    			b++;
	    		}
	    		int sum=w*b;
	    		sum+=foo(A,B,i+1,pos+1,tab);
	    		
	    		if (sum<minv)
	    		{
	    			minv=sum;
	    		}
    		}
    		tab[pos][ind]=minv;
    		return tab[pos][ind];
    	}
    	
    }
      
    int main(int argc, char const *argv[])
    {
    	string A;
    	cin>>A;
    	int B;
    	cin>>B;
    	int min_val = INT_MAX;
    	std::vector<int> v(A.size(),INT_MAX);
    	std::vector<std::vector<int> > tab(B+1,v);
    	int b=0,w=0;
    	if (B==1)
    	{

    		for (int i = 0; i < A.size(); ++i)
    		{
	    			if (A[i]=='W')
	    			{
	    				w++;
	    			}else
	    			{
	    				b++;
	    			}
	    		
	    		//cout<<"returning : "<<sum<<" "<<w<<" "<<b<<endl;
	    		
    		}
    		int sum=w*b;
    		cout<<sum<<endl;
    		return 0;
    	}
    	for (int i = 0; i < A.size()+1-B; ++i)
    	{
    		if (A[i]=='W')
    		{
    			w++;
    		}else
    		{
    			b++;
    		}
    		int sum=w*b;
    		//cout<<sum<<endl;
    		sum+=foo(A,B,i+1,2,tab);
    		//cout<<sum<<"\t"<<i<<endl;
    		if (sum<min_val)
    		{
    			min_val=sum;
    		}
    	}
    	cout<<min_val<<endl;
    	return 0;
    }