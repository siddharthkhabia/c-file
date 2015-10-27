#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
     
    void foo(std::vector<std::vector<std::vector<int> > > &tab,string &b,int a,int b)
    {
    	
    }


    int main(int argc, char const *argv[])
    {
		        
       string s;
       cin>>s;
       int n,m;
       cin>>n>>m;
       string b=s;
       for (int i = 0; i < n; ++i)
       {
       		int temp;
       		cin>>temp;
       		if(temp!=0)
       		{
	       		for(int j = s.size()-temp; j < s.size(); ++j)
	       		{
	       			b.push_back(s[j]);
	       		}
	       	}
       		for (int j = 0; j < s.size()-temp; ++j)
       		{
       			b.push_back(s[j]);
       		}
       }
       //cout<<b;
       std::vector<std::vector<std::vector<int> > > tab(b.size(),std::vector<std::vector<int> > (b.size(),std::vector<int> (26,-1)));
       foo(tab,&b,0,b.size()-1);

		return 0;
    }