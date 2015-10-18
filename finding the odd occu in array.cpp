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
    	for (int i = 0; i < 5; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	int value=A[0];
    	for (int i = 1; i < A.size(); ++i)
    	{
    		value=value^A[i];

    		/* code */
    	}
    	cout<<value<<endl;
    	/* code */
    	return value;
    }