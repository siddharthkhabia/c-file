#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#define pi 3.14159265
    using namespace std;


    int main(int argc, char const *argv[])
    {
        int n;  
		scanf("%d",&n);
        if (n==2)
        {
        	printf("1 2\n");
        	return 0;
        }
        std::vector<pair<double,int> > v;
        for (int i = 0; i < n; ++i)
        {
        	long double a,b;
        	cin>>a>>b;
        	long double temp = atan2l ( b, a);
        	v.push_back(make_pair(temp,i+1));
        }
       	sort(v.begin(),v.end());
       	long double min=4*pi;
       	int ind=0;
       	for (int i = 0; i < n; ++i)
       	{	
       		//cout<<v[i].first <<endl;
       		long double cmp =v[i].first-v[(i+1)%n].first;
       		if (cmp<0)
       		{
       			cmp*=-1;
       		}
       		if (cmp>pi)
       		{
       			cmp=2*pi-cmp;
       		}
       		//cout<<cmp<<endl;
       		if (cmp	<= min)
       		{
       			min = cmp;
       			ind = i;
       		}
       	}
       //	cout<<v[n-1].first<<endl;
       	printf("%d %d\n",v[ind].second,v[(ind+1)%n].second ); 
		return 0;
    }