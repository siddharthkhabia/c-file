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
    	int n;
    	cin>>n;
    	//std::vector<pair<int,int> > sv;
    	std::vector<int> row(2*n+1,0);
    	std::vector<std::vector<int> > v(2*n+1,row);
    	std::vector<int> v1(2*n+1);
    	for (int i = 2; i < 2*n+1; ++i)
    	{
    		for(int j=1;j<i;j++)
    		{
    			int temp;
    			cin>>temp;
    			v[i][j]=temp;
    		}
    		/* code */
    	}
    	//cout<<"working"<<endl;
    	long long int m=9999999;
    	int p1=0,p2=0;
    	long long int max=0;
	    for(int l=0;l<n;l++)
	    {
	    	//cout<<"works "<<l<<endl;
	    	max=0;	
	    	for (int i = 2; i < 2*n+1; ++i)
	    	{
	    		//cout<<"loop 1 i:"<<i<<endl;
	    		for(int j=1;j<i;j++)
	    		{
	    			if((v[i][j]<m) && v[i][j]>max)
	    			{
	    				max=v[i][j];
	    				p1=i;
	    				p2=j;
	    			}
	    		}
	    		/* code */
	    	}
	    	for (int i = 0; i < 2*n+1; ++i)
	    	{
	    		v[i][p1]=0;
	    		v[p1][i]=0;
	    		v[i][p2]=0;
	    		v[p2][i]=0;
	    	}
	    	//cout<<p1<<"  "<<p2<<endl;
	    	m=max;
	    	v1[p1]=p2;
	    	v1[p2]=p1;
	    }
	    for (int i = 1; i < v1.size(); ++i)
	    {
	    	cout<<v1[i]<<" ";
	    	/* code */
	    }
	    cout<<endl;
    	return 0;
    }