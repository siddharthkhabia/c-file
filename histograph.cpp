#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	vector <int > A;
    	for (int i = 0; i < 9; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	stack <pair<int,int> > s;
    	int maxs=0;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		//cout<<"running "<<endl;
    		if(s.empty()){
    			s.push(make_pair(A[i],0));
    		}
    		else{
    			int c=0;
    			while(s.top().first>A[i])
    			{
    			

    				pair<int,int> k=s.top();    				
    				s.pop();
    				c+=1+k.second;
    				int temp;
    				temp=k.first*c;    				
    				if (temp>maxs)
    				{
    					maxs=temp;
    				}
    				if (s.empty())
    				{
    					break;
    				}    				
    				/* code */
    			}
    		//	cout<<"yepsalutely"<<endl;
    			s.push(make_pair(A[i],c));
    		}
    		/* code */
    	}
    	int c=0;
    	if (!s.empty())
    	{
    		while(!s.empty())
    			{
    			

    				pair<int,int> k=s.top();    				
    				s.pop();
    				c+=1+k.second;
    				int temp;
    				temp=k.first*c;    				
    				if (temp>maxs)
    				{
    					maxs=temp;
    				}
    			}

    		/* code */
    	}
    	cout<<maxs<<endl;
    	return 0; 
    }