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
    	for (int i = 0; i < 9; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	int B;
    	cin>>B;

    	int i=1;
    	int j=0;
    	while(j<i && i<A.size()){
    		if (A[i]-A[j]<B)
    		{
    			i++;
    			/* code */
    		}
    		else if (A[i]-A[j]==B)
    		{
    			cout<<"1"<<endl;
    			return 1;
    			/* code */
    		}
    		else if (A[i]-A[j]>B)
    		{
    			j++;
    			if (j==i)
    			{
    				i++;
    				/* code */
    			}
    			/* code */
    		}
    	}
    	cout<<"0"<<endl;
    	return 0;
    }