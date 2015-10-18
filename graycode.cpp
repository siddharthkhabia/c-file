#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void foo(std::vector<std::vector<int> > &ans,int n,int index)
    {
    	if (n==index)
    	{
    		return;
    	}
    	std::vector<std::vector<int> > copy;
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		std::vector<int> v;
    		v=ans[i];
    		v.insert(v.begin(),0);
    		copy.push_back(v);
    	}
    	for (int i = ans.size()-1; i >=0 ; --i)
    	{
    		std::vector<int> v;
    		v=ans[i];
    		v.insert(v.begin(),1);
    		copy.push_back(v);
    	}
    	ans=copy;
    	foo(ans,n,index+1);
    	return;
    }
      
    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	std::vector<std::vector<int> > ans(2);
    	ans[0].push_back(0);
    	ans[1].push_back(1);
    	foo(ans,n,1);
    	std::vector<int> ret;
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		int big=0;
    		for (int j = 0; j < ans[i].size(); ++j)
    		{
    			big=big*2+ans[i][j];
    		}
    		ret.push_back(big);
    		//cout<<big<<endl;
    		
    		/* code */
    	}
    	for (int i = 0; i < ret.size(); ++i)
    	{
    		cout<<ret[i]<<endl;
    		/* code */
    	}
    	return 0;
    }