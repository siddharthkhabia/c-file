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
    	std::vector<int > A;
    	for (int i = 0; i < 5; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	
    	int i,j;
    	i=0;
    	j=A.size()-1;
    	
    	int area=0;
    	int maria=0;

    	while(i<j){
    		area=(j-i)*(min(A[i],A[j]));
    		if (maria<area)
    		{
    			maria= area;
    			/* code */
    		}
    		if (A[i]<A[j])
    		{
    			i++;
    			/* code */
    		}else{
    			j--;
    		}
    	}
    	/* code */
    	cout<<maria<<endl;
    	return maria;
    }