#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void foo(std::vector<std::vector<int> > &ans,std::vector<int> &A,std::vector<int> &v,int j)
    {
    	if (j==A.size())
    	{
    		ans.push_back(v);
    		return;
    	}
    	else
    	{	
    		
    		for (int i = 0; i <= v.size(); ++i)
    		{
    			std::vector<int> t;
    			t=v;
    			t.insert(t.begin()+i,A[j]);
    			//t.erase(t.end());
    			foo(ans,A,t,j+1);
    			//t.erase(t.begin()+i);
    		}
    	}
    }

    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	std::vector<int> A;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	std::vector<std::vector<int > > ans;
    	std::vector<int> v;
    	v.push_back(A[0]);
    	foo(ans,A,v,1);

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
