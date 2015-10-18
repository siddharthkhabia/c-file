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
    	long long int n;
    	cin>>n;
    	int i=0;
    	int ans=0;

    	int k=(n)%3;
    	long long int l= (n-2)/5;
    	if (l%3>=k)
    	{
    		cout<<l/3+2<<endl;
    	}
    	else
    	{
    		cout<<l/3+1<<endl;
    	}
    	
    	return 0;
    }