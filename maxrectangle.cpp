#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
     
     void foo(std::vector<std::vector<int> > &A, std::vector<std::vector<pair<int,int> > > &lr, std::vector<std::vector<pair<int,int> > > &rec,int a,int b,int *m)
     {
     	if (A[a][b]==1)
     	{
	     	if (b==0)
	     	{
	     		lr[a][b].first=1;
	     	}
	     	else
	     	{
	     		lr[a][b].first=lr[a][b-1].first+1;
	     	}

	     	if (a==0)
	     	{
	     		lr[a][b].second=1;     	
	     	}
	     	else
	     	{
	     		lr[a][b].second=lr[a-1][b].second+1;
	     	}
	     	
	     	if (b==0 || a==0)
	     	{
	     		rec[a][b].first=lr[a][b].first;
	     		rec[a][b].second=lr[a][b].second;
	     		if (*m<(rec[a][b].first*rec[a][b].second))
	     		{
	     			*m=(rec[a][b].first*rec[a][b].second);
	     		}
	     		return ;
	     	}
	     	else
	     	{
	     		if (rec[a-1][b-1].first>= lr[a][b].first)
	     		{
	     			rec[a][b].first=lr[a][b].first;
	     		}
	     		else
	     		{
	     			rec[a][b].first=1+rec[a-1][b-1].first;
	     		}

	     		if (rec[a-1][b-1].second>= lr[a][b].second)
	     		{
	     			rec[a][b].second=lr[a][b].second;
	     		}
	     		else
	     		{
	     			rec[a][b].second=1+rec[a-1][b-1].second;
	     		}

	     		if (*m<(rec[a][b].first * rec[a][b].second))
	     		{
	     			*m=(rec[a][b].first * rec[a][b].second);
	     		}
	     		return ;
	     	}
	    }
	    else
	    {
	    	lr[a][b].first=0;
	    	lr[a][b].second=0;
	    	rec[a][b].first=0;
	    	rec[a][b].second=0;
	    }
	 }

    int main(int argc, char const *argv[])
    {
    	int n;
    	cin>>n;
    	int m;
    	cin>>m;
        std::vector<std::vector<int> > A(n,std::vector<int> (m,0));
        for (int i = 0; i < n; ++i)
        {
        	for (int j = 0; j < m; ++j)
        	{
        		int temp;
        		cin>>temp;
        		A[i][j]=temp;
        	}
        }
        std::vector<std::vector<pair<int,int> > > lr(A.size(),std::vector<pair<int,int> > (A[0].size(),make_pair<int,int> (0,0)));
        std::vector<std::vector<pair<int,int> > > rec(A.size(),std::vector<pair<int,int> > (A[0].size(),make_pair<int,int> (0,0)));
		int mar=0;
		for (int i = 0; i < A.size(); ++i)
		{
			for (int j = 0; j < A[0].size(); ++j)
			{
				foo(A,lr,rec,i,j,&mar);
			}
		}
		cout<<endl;
		for (int i = 0; i < lr.size(); ++i)
		{
			for (int j = 0; j < lr[0].size(); ++j)
			{
					cout<< lr[i][j].first<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < rec.size(); ++i)
		{
			for (int j = 0; j < rec[0].size(); ++j)
			{
					cout<< lr[i][j].second<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < rec.size(); ++i)
		{
			for (int j = 0; j < rec[0].size(); ++j)
			{
					cout<< rec[i][j].first<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < rec.size(); ++i)
		{
			for (int j = 0; j < rec[0].size(); ++j)
			{
					cout<< rec[i][j].second<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<mar<<endl;;
		return 0;
    }