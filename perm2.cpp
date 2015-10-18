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
    	std::vector<int> A;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	sort(A.begin(),A.end());
    	std::vector<std::vector<int> > ans;
    	ans.push_back(A);
    	int k=-1,I;
	    while(1)
	    {
	    	k=-1;
	    	for (int i = 0; i < A.size()-1; ++i)
	    	{
	    		if (A[i]<A[i+1])
	    		{
	    			k=i;
	    		}
	    	}
	    	if (k==-1)
	    	{
	    		cout<<"done"<<endl;
	    		break;
	    	}
	    	else
	    	{
	    		for (int i = k; i < A.size(); ++i)
	    		{
	    			if (A[i]>A[k])
	    			{
	    				I=i;
	    			}
	    		}
	    		swap(A[I],A[k]);
	    		int flag=0;
	    		reverse(A.begin()+k+1,A.end());
	    		ans.push_back(A);
	    		// for (int i = 0; i < ans.size(); ++i)
	    		// {
	    		// 	if (ans[i]==A)
	    		// 	{
	    		// 		flag=1;
	    		// 		break;
	    		// 	}
	    		// }
	    		// if (flag==0)
	    		// {
	    		// 	ans.push_back(A);
	    		// 	/* code */
	    		// }
	    	}
	    }
	    for (int i = 0; i < ans.size(); ++i)
	    {
	    	for(int j=0;j<ans[i].size();j++)
	    	{
	    		cout<<ans[i][j]<<" ";
	    	}
	    	cout<<endl;
	    	/* code */
	    }
    	return 0;
    }