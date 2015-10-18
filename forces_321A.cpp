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
    	std::vector<int> v;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		v.push_back(temp);

    	}
    	int max=0;
    	int comp=0;
    	int count=0;
    	for (int i = 0; i < v.size(); ++i)
    	{
    		if(v[i]>=comp)
    		{
    			count++;
    			comp=v[i];
    		}
    		else
    		{
    			//cout<<"current max is "<<max<<"and count is "<<count<<endl;
    			if(max<count)
    			{
    				max=count;
    			}
    			count=1;
    			comp=v[i];
    		}

    		/* code */
    	}
    	if(count>max)
    	{
    		max=count;
    	}
    	cout<<max;
    	return 0;
    }