#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	vector<string> A;
    	int l;
    	cin>>l;
    	for (int i = 0; i < l; ++i)
    	{
    		string temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}

    	stack<int > v;
    	int a,b;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (A[i][0]=='+'||(A[i][0]=='-'&&A[i].size()==1)||A[i][0]=='*'||A[i][0]=='/')
    		{
    			a=v.top();
    			v.pop();
    			b=v.top();
    			v.pop();
    			if (A[i][0]=='+')
    			{
    				a=b+a;
    				v.push(a);
    				/* code */
    			}
    			if (A[i][0]=='-')
    			{
    				a=b-a;
    				v.push(a);
    				/* code */
    			}
    			if (A[i][0]=='*')
    			{
    				a=b*a;
    				v.push(a);
    				/* code */
    			}
    			if (A[i][0]=='/')
    			{
    				a=b/a;
    				v.push(a);
    				/* code */
    			}

    			/* code */
    		}
    		else{
    		        int n=0;
    		        int j=0;
    		        if(A[i][0]=='-'){
    		            n=-1*A[i][1];
    		            j=2;
    		        }
    		        for(j;j<A[i].size();j++){
    		            n=n*10;
    		            n=n+(A[i][j]-48);
    		           // cout<<"value of n is :\t"<<(int)(A[i][j]-48)<<endl;
    		        }
    		       // cout<<n<<"pushed in "<<endl;
    				v.push(n);
    			}
    		/* code */
    	}
    	cout<<v.top()<<endl;
    	return v.top();
    }