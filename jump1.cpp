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
    	std::vector<int > A;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);


    	}
    	std::vector<int> t(A.size(),-1);
    	int amin = A.size()-1;
    	for (int i = A.size()-2; i >=0; --i)
    	{
    		if (A[i]+i>=amin)
    		{
    			amin=i;
    		}
    	}
    	//cout<<amin<<endl;
    	if (amin==0)
    	{
    		cout<<"yes"<<endl;
    	}
    	else
    	{
    		cout<<"no"<<endl;
    	}
    	return 0;
    }