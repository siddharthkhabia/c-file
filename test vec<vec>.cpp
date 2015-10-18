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
    	int n=10;
    	std::vector<std::vector<int> > v;
    	std::vector<int> v1;
    	for (int i = 0; i < n; ++i)
    	{
    		v.push_back(v1);
    		/* code */
    	}
    	for (int i = 0; i < 10; ++i)
    	{
    		v[i].push_back(i);
    		/* code */
    	}
    	for (int i = 0; i < 10; ++i)
    	{

    		cout<<v[i][0]<<endl;;
    		/* code */
    	}
    	cout<<"done!!"<<endl;
    	/* code */
    	return 0;
    }