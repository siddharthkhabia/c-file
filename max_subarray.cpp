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
    	if (n==0)
    	{
    		cout<<"0"<<endl;
    		return 0;
    		/* code */
    	}
    	std::vector<int> A;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}

    	std::vector<int> v;
    	for (int i = 0; i < A.size()-1; ++i)
    	{
    		v.push_back(A[i+1]-A[i]);
    		/* code */
    	}
    	int max=0;
    	int cur=0;
    	for (int i = 0; i < v.size(); ++i)
    	{
    		cur+=v[i];
    		if (max<cur)
    		{
    			max=cur;
    			/* code */
    		}
    		if (cur<0)
    		{
    			cur=0;
    			/* code */
    		}
    	}
    	cout<<max<<endl;
    	return 0;
    }