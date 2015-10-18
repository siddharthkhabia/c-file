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
    	int count=0;
    	while(n>0)
    	{
    		if (n&1)
    		{
    			count++;
    			/* code */
    		}
    		n=n>>1;
    	}
    	cout<<count;
    	return 0;
    }