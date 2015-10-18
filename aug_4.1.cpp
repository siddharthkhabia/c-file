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
    	int t;
    	cin>>t;
    	while(t--){
    		long long  int n=0,h;
    		cin>>n>>h;
    		std::vector<std::vector<long long  int> > v;
    		std::vector<long long  int> v1;
    		for (long long  int i = 0; i < n; ++i)
    		{
    			v.push_back(v1);
    		/* code */
    		}
    		std::vector<long long  int> ind(n,0);
    		std::vector<long long  int> arr(n,0);
    		int a=0,b=0;
    		for (long long  int i = 0; i < n; ++i)
    		{
    			cin>>a>>b;
    			v[a].push_back(i);
    			v[b].push_back(i);
    			/* code */
    		}
    		long long  int count=0;
    		for (long long  int i = 0; i < n; ++i)
    		{
    			for (long long  int j = 0; j < v[i].size(); ++j)
    			{
    				///cout<<"i work"<<endl;
    				if (ind[v[i][j]]==0)
    				{
    					ind[v[i][j]]=1;
    					count++;
    					/* code */
    				}else{
    					arr[i]++;
    					ind[v[i][j]]=0;
    					count--;
    				}
    				/* code */
    			}

    			arr[i]+=count;
    			/* code */
    		}
    		long long  int sum=0;
    		for (long long  int i = 0; i < h; ++i)
    		{
    			sum+=arr[i];
    			/* code */
    		}
    		long long  int maxi=sum;
    		for (long long  int i = h; i < n; ++i)
    		{
    			sum+=arr[i]-arr[i-h];
    			if (sum>maxi)
    			{
    				maxi=sum;
    				/* code */
    			}
    			/* code */
    		}
    		cout<<(long long  int )((h*n)-maxi)<<endl;
    	   }
    	/* code */
    	return 0;
    }