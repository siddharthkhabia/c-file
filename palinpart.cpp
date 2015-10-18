#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
   
   void palp(std::vector<std::vector<string> > &v,std::vector<string> &v1,int k){

   		for (int i = v1.size()-1; i >=k-1; --i)
   		{
   			//cout<<"ham chal rhe hai !"<<endl;
   			int j=i-k+1;
   			int flag=0;
   			int n=i;
   			while(j<=n){
   				if (v1[j]!=v1[n])
   				{
   					flag=1;
   					break;   					
   				}
   				j++;
   				n--;

   			}
   		//	cout<<"ham yha pohoch gye  "<<flag<<endl;
   			if(flag==1){
   				continue;
   			}
   			std::vector<string> s;
   			string temp;
   			for (int l = 0; l <i-k+1 ; ++l)
   			{
   				
   				temp= v1[l];
   				s.push_back(temp);  				
   			}
   			temp="";
   		//	cout<<"printing : "<<endl;
   			for (int l = i-k+1; l <=i; ++l)
   			{   				
   				temp+= v1[l];
   				/* code */
   			}
   			//cout<<"temp is : "<<temp<<endl;
   			s.push_back(temp);
   			temp="";
   			//   			cout<<"printing : "<<endl;

   			for (int l = i+1; l < v1.size(); ++l)
   			{
   				temp= v1[l];
   				s.push_back(temp);  	
   				/* code */
   			}
   			//   			cout<<"printing : "<<endl;


   			v.push_back(s);
   		}
   } 

   void pulp (std::vector<std::vector<string> > &v,std::vector<string> &v1){
   		for (int p = 0; p < v1.size(); ++p)
   		{
   			if (v1[p].size()>1)
   			{
   				break;
   			}
   			int t=v[p].size();
   			for(int k=t;k<p+1;k++)
   			{
   			for (int i = p-1; i >=k-1; --i)
   			{
   			//cout<<"ham chal rhe hai !"<<endl;
   			int j=i-k+1;
   			int flag=0;
   			int n=i;
   			cout<<v1[j]<<"  "<<v1[n]<<endl;
   				while(j<=n){
   					cout<<"i am here"<<endl;
   					if (v1[j]!=v1[n])
   					{

   						flag=1;
   						break;   					
   					}
   					j++;
   					n--;

   				}
   			cout<<"ham yha pohoch gye  "<<flag<<endl;
   			if(flag==1){
   				continue;
   			}
   			std::vector<string> s;
   			string temp;
   			for (int l = 0; l <i-k+1 ; ++l)
   			{
   				
   				temp= v1[l];
   				s.push_back(temp);  				
   			}
   			temp="";
   		//	cout<<"printing : "<<endl;
   			for (int l = i-k+1; l <=i; ++l)
   			{   				
   				temp+= v1[l];
   				/* code */
   			}
   			cout<<"temp is : "<<temp<<endl;
   			s.push_back(temp);
   			temp="";
   			//   			cout<<"printing : "<<endl;

   			for (int l = i+1; l < v1.size(); ++l)
   			{
   				temp= v1[l];
   				s.push_back(temp);  	
   				/* code */
   			}
   			//   			cout<<"printing : "<<endl;


   			v.push_back(s);
   			}
				
			}
   		}
   }
      
    int main(int argc, char const *argv[])
    {
    	string A;
    	cin>>A;
    	std::vector<string> v1;
    	std::vector<std::vector<string> > v;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		string temp;
    		temp=A[i];
    		v1.push_back(temp);
    		/* code */
    	}
    	v.push_back(v1);
    	for (int i = 2; i <= A.size(); ++i)
    	{
    		palp(v,v1,i);
    		/* code */
    	}
    	for (int i = 1; i < v.size(); ++i)
    	{
    		pulp(v,v[i]);
    		/* code */
    	}
    	for (int i = 0; i < A.size(); ++i)
    	{
    		cout<<v[1][i]<<endl;
    		/* code */
    	}
    	return 0;
    }