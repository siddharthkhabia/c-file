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
    	std::vector<int > B;
    	for (int i = 0; i < 5; ++i)
    	{
    		int t1,t2;
    		cin>>t1>>t2;
    		A.push_back(t1);
    		B.push_back(t2);
    		/* code */
    	}
    	std::vector<int> ans;
    	int p1=0,p2=0;
    		while(p1<A.size() && p2<B.size())
    	{
    		if(A[p1]==B[p2]){
    			ans.push_back(A[p1]);
    			p1++;
    			p2++;
    		}
    		else if (A[p1]<B[p2])
    		{
    			p1++;
    			/* code */
    		}else{
    			p2++;
    		}
    		/* code */
    	}
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		cout<<ans[i]<<endl;
    		/* code */
    	}
    	/* code */
    	return 0;
    }