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
    	string A;
    	cin>>A;
    	std::vector<string> B;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		string temp;
    		cin>>temp;
    		B.push_back(temp);
    	}
    	
    	std::vector<std::vector<string> > log(130);
    	for (int i = 0; i < B.size(); ++i)
    	{
    		log[B[i][0]].push_back(B[i]);
    	}
    	std::vector<int> ans;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		std::vector<std::vector<string> > ch;
    		ch=log;
    		int f=0;
    		for(int j=i;j<(i+(B.size()*(B[0].size())));j=j+(B[0].size()))
    		{
    			int flag=0;
    			for(int k=0;k<ch[A[j]].size();k++)
    			{
    				if (A.substr(j,B[0].size())==ch[A[j]][k])
    				{
    					flag=1;
    					ch[A[j]].erase(ch[A[j]].begin()+k);
    					break;
    				}
    			}
    			if (flag==0)
    			{
    				f=1;
    				break;
    			}
    		}
    		if (f==0)
    		{
    			ans.push_back(i);
    			//i=i+(B.size()*(B[0].size()))-1;
    		}
    		/* code */
    	}
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		cout<<ans[i]<<endl;
    		/* code */
    	}
    	return 0;
    }