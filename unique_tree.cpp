#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    int foo(int n,std::vector<int> &v)
    {
    	if (n==0 )
    	{
    		return 1;
    	}
    	else if (v[n]>0)	
    	{
    		//cout<<"here !"<<endl;
    		return v[n]; 
    	}
    	//cout<<"there"<<endl;
    	else
    	{
    		int count=0;
    		for (int i = 0; i < n; ++i)
    		{
    			count += ((foo(i,v))*(foo(n-i-1,v)));
    			
    		}
    		v[n]=count;
    			return count;
    	}

    }
      
    int main(int argc, char const *argv[])
    {
    	int A;
    	cin>>A;
    	int c;
    	std::vector<int> v(A+1,0);
    	//v[2]=5;
    	//v[1]=1;
    	//cout<<v[2]<<endl;
    	//cout<<"foo !"<<endl;
    	c= foo(A,v);
    	
    	cout<<c<<endl;
    	return 0;
    }