#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	int n,m;
    	cin>>n>>m;
    	string s1;
    	cin>>s1;
    	std::vector<int> sub(n);
    	std::vector<int> add(n);
    	for (int i = 0; i < n; ++i)
    	{
    		if (s1[i]!='.')
    		{
    			sub[i]=0;

    		}
    		else
    		{
    			int c=0;
    			int j=i;
    			while(s1[j]=='.')
    			{
    				c++;
    				j++;
    			}
    			if (c==1)
    			{
    				sub[i]=0;
    			}
    			else if (c==2)
    			{
    				sub[i]=1;
    				sub[i+1]=1;
    				i++;
    			}
    			else
    			{
    				sub[i]=1;
    				i++;
    				while(i<j-1)
    				{
    					sub[i]=2;
    					i++;
    				}
    				sub[i]=1;
    			}
    		}
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		cout<<sub[i]<<"  ";
    	}
    	cout<<endl;

    	for (int i = 0; i < n; ++i)
    	{
    		if (s1[i]=='.')
    		{
    			add[i]=-1;

    		}
    		else
    		{
    			int c=0;
    			int j=i;
    			while(s1[j]!='.')
    			{
    				c++;
    				j++;
    			}
    			if (c==1)
    			{
    				add[i]=2;
    			}
    			else if (c==2)
    			{
    				add[i]=1;
    				add[i+1]=1;
    				i++;
    			}
    			else
    			{
    				add[i]=1;
    				i++;
    				while(i<j-1)
    				{
    					add[i]=0;
    					i++;
    				}
    				add[i]=1;
    			}
    		}
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		cout<<add[i]<<"  ";
    	}
    	cout<<endl;
    	int co=0;
    	int del=0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (s1[i]!='.')
    		{
    			if (co>0)
    			{
    				del+=co-1;
    			}
    			co=0;
    		}
    		else
    		{
    			co++;
    		}
    	}
    	if (co>0)
    		{
    			del+=co-1;
    		}
    	cout<<co<<endl;

    	while(m--)
    	{
    		int ind;
    		cin>>ind;
    		char c;
    		cin>>c;
    		if (c=='.')
    		{
    			if (add[ind-1]>0)
    			{
    				co+=add[ind-1];
    				
    			}
    			if (add[ind-1]==0)
    			{
    				
    			}

    		}
    		else
    		{

    		}
    	}
    	return 0;
    }