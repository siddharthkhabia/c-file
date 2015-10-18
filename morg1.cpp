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
    	while(n--)
    	{
    		int t;
    		cin>>t;
    		std::vector<int> v;
    		for (int i = 0; i < t; ++i)
    		{
    			int temp;
    			cin>>temp;
    			v.push_back(temp);
    		}
    		for (int i = 1; i < v.size()-1; ++i)
    		{
    			if (v[i-1]%2==0 && v[i+1]%2==0)
    			{
    				v[i]=v[i-1]+v[i+1];
    				v[i]=v[i]/2;
    			}
    			/* code */
    		}
    		for (int i = 0; i < v.size(); ++i)
    		{
    			cout<<v[i]<<" ";
    			/* code */
    		}
    		long long int S=0;
    		for (int i = 0; i < v.size()/2 ; ++i)
    		{
    			S+= abs(v[i]-v[v.size()-i-1]);
    			/* code */
    		}
    		cout<<S<<endl;
    	}
    	return 0;
    }