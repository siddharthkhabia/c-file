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
    	int c1=0,c2=0;
    	int flag=0;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (A[i]=='(')
    		{
    			c1++;
    			flag=1;

    		}if (A[i]=='+'||A[i]=='-'||A[i]=='*'||A[i]=='/')
    		{
    			c2++;
    			flag=0;
    			/* code */
    		}if(A[i]==')'&&flag==1){
    			cout<<"1"<<endl;
    			return 1;
    		}
    		/* code */
    	}
    	//cout<<c1<<"\t"<<c2<<endl;
    	if (c1<=c2)
    	{
    		cout<<"0"<<endl;
    		return 0;
    		/* code */
    	}
    	else{cout<<"1"<<endl;
    	return 1;
    	}
    }