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
    	int n,m;

    	cin>>n>>m;
    	if (n==1)
    	{
    		cout<<"1"<<endl;
    		return 0;
    		/* code */
    	}
    	if ((m-1) < (n-m))
    	{
    		cout<<m+1<<endl;
    		return 0;
    	}
    	else
    	{
    		cout<<m-1<<endl;
    		return 0;
    	}
    	
    	return 0;
    }