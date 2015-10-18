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
    	int n,d;
    	cin>>n>>d;
    	std::vector<pair<long long int ,long long int > > v1;
    
    	for (int i = 0; i < n; ++i)
    	{
    		long long int t1,t2;
    		cin>>t1>>t2;
    		v1.push_back(make_pair<long long int ,long long int >(t1,t2));
    		
    	}
    	sort(v1.begin(),v1.end());
    	// for (int i = 0; i < v1.size(); ++i)
    	// {
    	// 	cout<<v1[i].first<<endl;
    	// 	/* code */
    	// }
    	long long int max=0;
    	long long int cd=0,count=0;
    	for (int i = 0; i < v1.size(); ++i)
    	{
    		if ((v1[i].first-v1[cd].first) < d)
    		{
    			count += v1[i].second;
    			/* code */
    		}
    		else
    		{
    			if (max<count)
    			{
    				max=count;
    				/* code */
    			}
    			
    			while((v1[i].first-v1[cd].first) >= d)
    			{
    				count-=v1[cd].second;
    				cd++;
    			}
    			count+=v1[i].second;
    		}
    	}
    	if (max<count)
    	{
    		max=count;
    		/* code */
    	}
    	cout<<max<<endl;

    	return 0;
    }