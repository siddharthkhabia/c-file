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
        std::vector<int> A;

        for (int i = 0; i < n; ++i)
        {
        	int temp;
        	cin>>temp;
        	A.push_back(temp);
        }
        std::vector<int> df;
        for (int i = 1; i < A.size(); ++i)
        {
        	df.push_back(A[i]-A[i-1]);
        }
        std::vector<int> tf;
        
        tf.push_back(0);
        int sum=0;
        int ts=0;
        for (int i = 0; i < df.size(); ++i)
        {
        	ts+=df[i];
        	if (ts>sum)
        	{
        		sum=ts;
        	}
        	tf.push_back(sum);

        }
       	for (int i = 0; i < tf.size(); ++i)
       	{
       		cout<<tf[i]<<" ";
       	}
       	cout<<endl;
       	std::vector<int> tb(tf.size(),0);
       	tb[tf.size()-1]=0;
       	sum=0;
       	ts=0;
       	for (int i = tf.size()-2; i > -1; --i)
       	{
       		//cout<<df[i]<<endl;
       		ts+=df[i];
        	if (ts>sum)
        	{
        		sum=ts;
        	}
        	tb[i]=(sum);
       	}
       	tb.push_back(0);
       	for (int i = 0; i < tf.size(); ++i)
       	{
       		cout<<tb[i]<<" ";
       	}
       	cout<<endl;
       	sum=0;
       	ts=0;
       	for (int i = 0; i < tf.size(); ++i)
       	{
       		ts=tf[i]+tb[i+1];
       		cout<<tf[i]<<" ! "<<endl;
       		if (ts>sum)
       		{
       			sum=ts;
       		}
       	}
       	cout<<sum<<endl;
		return 0;
    }