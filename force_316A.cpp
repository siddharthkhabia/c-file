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
    	int n,m;
    	int k=0,index;
    	cin>>n>>m;
    	vector<int> v(n,0);
    	for (int i = 0; i < m; ++i)
    	{
    		int ma=0,ind=0;
    		for (int j = 0; j < n; ++j)
    		{
    			int temp;
    			cin>>temp;
    			if (ma<temp)
    			{
    				ma=temp;
    				ind=j;
    			}
    			
    		}
    		//cout<<"ind is "<<ind<<endl;
    			v[ind]++;
    			
    	}
    	for (int i = 0; i < v.size(); ++i)
    	{
    		//cout<<v[i]<<endl;
    		if (k<v[i])
    		{
    			k=v[i];
    			index=i;
    		}
    	}

    	cout<<index+1<<endl;
    	return 0;
    }