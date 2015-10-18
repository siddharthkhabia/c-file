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
    	int n;
    	cin>>n;
    	std::vector<int> X;
    	std::vector<int> Y;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		X.push_back(temp);
    		cin>>temp;
    		Y.push_back(temp);
    		/* code */
    	}

    	int sum=0;
    	for (int i = 1; i < X.size(); ++i)
    	{
    		int x,y;
    		x=abs(X[i]-X[i-1]);
    		y=abs(Y[i]-Y[i-1]);
    		sum += max(x,y);
    	}
    	cout<<sum<<endl;
    	return 0;
    }