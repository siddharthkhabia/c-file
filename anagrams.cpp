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
    	std::vector<string> A;
    	for (int i = 0; i < n; ++i)
    	{
    		string temp;
    		cin>>temp;
    		A.push_back(temp);
    	}
    	std::vector<std::vector<int> > log;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		std::vector<int> v(52,0);
    		for (int j =0; j<A[i].size();j++)
    		{
    			if (A[i][j]<97)
    			{
    				v[A[i][j]-65]++;
    			}
    			else
    			{
    				v[A[i][j]-71]++;
    			}
    			/* code */
    		}
    		log.push_back(v);
    	}
    	std::vector<std::vector<int> > ans;
    	for (int i = 0; i < log.size(); ++i)
    	{
    		if (log[i].empty())
    		{
    			continue;
    		}
    		std::vector<int> h;
    		h.push_back(i+1);
    		for(int j=i+1;j<log.size();j++)
    		{    			
    			if (log[j]==log[i])
    			{
    				h.push_back(j+1);
    				log[j].clear();
    				/* code */
    			}
    		}   
    		ans.push_back(h); 
    		log[i].clear();		
    	}
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		for(int j=0;j<ans[i].size();++j)
    		{
    			cout<<ans[i][j]<<"  ";
    		}
    		cout<<endl;
    		/* code */
    	}
    	return 0;
    }