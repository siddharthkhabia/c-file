#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void heapify(std::vector<pair<int,int> > &v,int ind)
    {
    	if (v.size()>(ind*2+2))
    	{
    		if (v[ind].first >v[ind*2+1].first&&v[ind].first>v[ind*2+2].first)
    	    	{
    	    		return;
    	    		/* code */
    	    	}
    	    	else
    	    	{
    	    		if(v[ind*2+1].first>v[ind*2+2].first)
    	    		{
    	    			swap(v[ind*2+1],v[ind]);
    	    			heapify(v,ind*2+1);
    	    		}
    	    		else
    	    		{
    	    			swap(v[ind*2+2],v[ind]);
    	    			heapify(v,ind*2+2);
    	    		}
    	    	}
    	}
    	else if (v.size()>(ind*2+1))
    	{
    		if (v[ind]>v[ind*2+1])
    	    	{
    	    		return;
    	    		/* code */
    	    	}
    	    else
    	    {
    	    	swap(v[ind*2+1],v[ind]);
    	    	heapify(v,ind*2+1);
    	    }
    	}
    	else
    	{
    		return;
    	}

    }
     
    int main(int argc, char const *argv[])
    {
    	std::vector<std::vector<int> > A;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		int k;
    		cin>>k;
    		std::vector<int> v;
    		for(int j=0;j<k;j++)
    		{
    			int temp;
    			cin>>temp;
    			v.push_back(temp);
    		}
    		A.push_back(v);
    		/* code */
    	}
    	std::vector<pair<int,int> > hp;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (A[i].empty())
    		{
    			continue;
    			/* code */
    		}
    		sort(A[i].begin(),A[i].end());
    		reverse(A[i].begin(),A[i].end());
    		hp.push_back(make_pair(A[i][0],i));
    		A[i].erase(A[i].begin());
    		/* code */
    	}
    	make_heap(hp.begin(),hp.end());
    	std::vector<int> ret;
    	while(!hp.empty())
    	{
    		ret.push_back(hp[0].first);
    		if ((A[hp[0].second]).empty())
    		{
    			hp.erase(hp.begin());
    		}else{
    			hp[0].first=A[hp[0].second][0];
    			A[hp[0].second].erase(A[hp[0].second].begin());
    		}
    		//make_heap(hp.begin(),hp.end());
    		heapify(hp,0);
    	}
    	reverse(hp.begin(),hp.end());
    	for (int i = 0; i < ret.size(); ++i)
    	{
    		cout<<ret[i]<<" ";
    		/* code */
    	}
    	cout<<endl;
    	return 0;
    }