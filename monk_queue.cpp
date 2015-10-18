#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	
	   int n;
	   cin>>n;
	   vector <int> id;
	   queue <int> r;
	   for(int i=0;i<n;i++)
	   {
	   		int temp ;
	   		cin>>temp;
	   		r.push(temp);
	   }

	   for(int i=0;i<n;i++)
	   {
	   		int temp ;
	   		cin>>temp;
	   		id.push_back(temp);
	   }
	   int count =0;
	   for (int i = 0; i < n; ++i)
	   {
	   		if (id[i]==r.front())
	   		{
	   			count++;
	   			r.pop();
	   			/* code */
	   		}
	   		else
	   		{
	   			// for(int j=i;j<n;j++)
	   			// {
	   			// 	cout<<id[j]<<" ";
	   			// }
	   			// cout<<endl;
	   		//	cout<<r.front()<<"is the top"<<endl;

	   			while(id[i]!=r.front())
	   			{
	   				int k=r.front();
	   				r.pop();
	   				r.push(k);
	   				count++;
	   			}
	   			count++;
	   			r.pop();

	   		}
	   }
	   cout<<count<<endl;
    	return 0;
    }te