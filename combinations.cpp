#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    	void foo(std::vector<std::vector<int> > &ans,std::vector<int> &v,int j,int k,int n,int val){
    		if (j==k)
    		{
    			ans.push_back(v);
    			return;
    		}
    		else{
    			for (int i =val ; i <= n-k+j+1; ++i)
    			{
    				v[j]=i;
    				foo(ans,v,j+1,k,n,i+1);
    			}

    		}



    	}

    int main(int argc, char const *argv[])
    {
    	int n,k;
    	cin>>n>>k;
    	std::vector<std::vector<int> > ans;
    	std::vector<int> v(k);
    	foo(ans,v,0,k,n,1);
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

