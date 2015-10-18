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
    	string A;
    	cin>>A;
    	int n= A.size();
    	std::vector<bool> v1(n,false);
    	std::vector<std::vector<bool> > v(n,v1);

    	for (int i = 0; i < n; ++i)
    	{
    		v[i][i]=true;
    		/* code */
    	}
    	int maxlen=1;
    	int start=0;

    	for (int i = 0; i < n; ++i)
    	{
    		if (A[i]==A[i+1])
    		{
    			v[i][i+1]=true;
    			maxlen = 2 ;
    			start=i;
    			/* code */
    		}
    		/* code */
    	}

    	for(int k=3;k<n+1;k++){

    		for (int i = 0; i < n-k+1; ++i)
    		{
    			int j= i+k-1;
    			if (v[i+1][j-1]==true && A[i]==A[j])
    			{
    				v[i][j]=true;
    				if (maxlen<k)
    				{
    					maxlen=k;
    					start=i;
    					/* code */
    				}
    				/* code */
    			}

    			/* code */
    		}
    	}
   		cout<<maxlen<<":\t"<<A.substr(start,maxlen)<<endl;
    	/* code */
    	return 0;
    }