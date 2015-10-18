#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void foo(std::vector< string > &ans,int A,string &s,int o,int c)
    {
    	if (o==c &&o==A)
    	{
    		ans.push_back(s);
    	}
    	else{
    		if (o==A && c<o)
    		{
    			string t;
    			t=s;
    			t+=")";
				foo(ans,A,t,o,c+1);
    		}
    		else if (o==c&&o<A)
    		{
    			string t;
    			t=s;
    			t+="(";
    			foo(ans,A,t,o+1,c);
    			/* code */
    		}
    		else if (c<o && o<A)
    		{
    			string t,l;
    			t=s;
    			t+="(";
    			foo(ans,A,t,o+1,c);
    			l=s;
    			l+=")";
				foo(ans,A,l,o,c+1);
    			/* code */
    		}

    	}
    	
    }
      
    int main(int argc, char const *argv[])
    {
		int A;
		cin>>A;
		std::vector<string> ans;   
		string s="(";
		foo(ans,A,s,1,0); 
		sort(ans.begin(),ans.end());
		//ans.push_back(s);
		for (int i = 0; i < ans.size(); ++i)
			{
				cout<<ans[i]<<endl;
				/* code */
			}	
    	return 0;
    }