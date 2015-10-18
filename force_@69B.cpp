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
    	int n;
    	cin>>n;
    	std::vector<pair<int,int> > v;
    	std::vector<int> c(n+1,0);
    	int f=0;
    	int fo=0;
    	int m3=-1,m1=-1,m2=-1;
    	for (int i = 1; i <= n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		v.push_back(make_pair<int,int>(temp,i));

    		c[temp]++;
    		if (c[temp]==3)
    		{
    			m3=temp;
    			f=1;

    		}
    		else if (c[temp]==2)	
    		{
    			fo++;
    			if (m1==-1)
    			{
    				m1=temp;
    			}
    			else if (m2==-1)
    			{
    				m2=temp;
    			}
    		}
    	}
    	if (f==1 || fo>1)
    	{
    		cout<<"YES"<<endl;
    		sort(v.begin(),v.end());
    		if (f==1)
    		{
    			for (int i = 0; i < v.size(); ++i)
    			{
    				cout<<v[i].second<<" ";
    			}
    			cout<<endl;int fi=0;
    			for (int i = 0; i < v.size(); ++i)
    			{
    				if (v[i].first==m3 && fi==0)
    				{
    					cout<<v[i+1].second<<" "<<v[i].second<<" ";
    					i+=1;
    					fi=1;
    					
    				}
    				else
    				{
    					cout<<v[i].second<<" ";
    				}

    			}
    			for (int i = 0; i < v.size(); ++i)
    			{
    				if (v[i].first==m3 && fi==0)
    				{
    					cout<<v[i+2].second<<" "<<v[i].second<<" "<<v[i+1].second<<" ";
    					i+=2;
    					
    				}
    				else
    				{
    					cout<<v[i].second<<" ";
    				}
    			}
    		}
    		else
    		{
    			for (int i = 0; i < v.size(); ++i)
    			{
    				cout<<v[i].second<<" ";
    			}
    			cout<<endl;
    			for (int i = 0; i < v.size(); ++i)
    			{
    				if (v[i].first==m1)
    				{
    						cout<<v[i+1].second<<" "<<v[i].second<<" ";
    						i=i+2;
    						for (int j = i; j < v.size(); ++j)
    						{
    							cout<<v[j].second<<" ";
    						}
    						cout<<endl;
    						break;
    				}
    				else
    				{
    					cout<<v[i].second<<" ";
    				}
    			}
    			for (int i = 0; i < v.size(); ++i)
    			{
    				if (v[i].first==m2)
    				{
    						cout<<v[i+1].second<<" "<<v[i].second<<" ";
    						i=i+2;
    						for (int j = i; j < v.size(); ++j)
    						{
    							cout<<v[j].second<<" ";
    						}
    						cout<<endl;
    						break;
    				}
    				else
    				{
    					cout<<v[i].second<<" ";
    				}
    			}
    		}
    	}
    	else
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	
    	
    	return 0;
    }