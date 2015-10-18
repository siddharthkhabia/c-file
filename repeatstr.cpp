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
    	string A;
    	cin>>A;
    	int length;
    	int max=0;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		std::vector<bool> v(200,false);
    		bool wl=true;
    		length=0;
    		while(wl)
    		{
    			for(int j=i;j<A.size();j++)
    			{
    				
    					if (v[A[j]]==true)
    					{
    						wl=false;
    						break;
    					}
    					else
    					{
    						v[A[j]]=true;
    						length++;
    					}
    				
    			}
    			if (max<length)
    			{
    				max=length;
    				/* code */
    			}
    			wl=false;
    		}
    		/* code */
    	}
    	cout<<max<<endl;
    	return 0;
    }