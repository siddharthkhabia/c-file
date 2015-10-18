#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void foo(std::vector<int> &A,std::vector<std::vector<int> > &ans,std::vector<int> &v,int no,int ind,int da)
    {
    	if (da==no)
    	{
    		std::vector<int> pusher;
    		for (int i = 0; i < da; ++i)
    		{
    			pusher.push_back(v[i]);
    		}
    		for (int i = 0; i < ans.size(); ++i)
    		{
    			if(pusher==ans[i]){
    				return;
    			}
    		}
    		ans.push_back(pusher);
    		
    	}
    	else
    	{
    		for (int i = ind+1; i < A.size(); ++i)
    		{
    			v[da]=A[i];
    			foo(A,ans,v,no,i,da+1);
    		}

    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	std::vector<int > A;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	std::vector<std::vector<int> > ans;
    	std::vector<int> empty;
    	ans.push_back(empty);
    	std::vector<int> v(A.size());
    	sort(A.begin(),A.end());
    	for (int i = 0; i < A.size(); ++i)
    	{
    		v[0]=A[i];
    		for (int j = 1; j <=A.size()-i ; ++j)
    		{
    			foo(A,ans,v,j,i,1);    				
    		}
    	}

    	for (int i = 0; i < ans.size(); ++i)
    	{
    		for (int j = 0; j < ans[i].size(); ++j)
    		{
    			cout<<ans[i][j]<<"\t";
    		}
    		cout<<endl;

    		/* code */
    	}
    	return 0;
    }