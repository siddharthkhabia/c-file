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
        
       long long int n;
       cin>>n;
       if (n==1)
       {
       	cout<<"1"<<endl<<"1 1"<<endl;
       	return 0;
       }
       long long int p=6*n;
       long long int c=0;
       long long int f=0;
       long long int val;	
       std::vector<pair<long long int,long long int> > v;
       for (long long int i = 1; i < n; ++i)
       {
       		long long int a = i*(i+1);
       		long long int b=(p+(i-1)*a)%(3*a);
       		long long int cd=(p+(i-1)*a)/(3*a);
       		if (b==0 && cd>=i)
       		{
       			if (cd==i)
       			{
       				f=1;
       				val=i;
       				continue;
       			}
       			c++;
       			v.push_back(make_pair( i,cd ) );
       		}

       		else if (3*a>p+(i-1)*a)
       		{
       			break;
       		}
       		
       }
       long long int j = floor(sqrt(n));
       if (f==1)
       {
       		cout<<2*c+1<<endl;
       }
       else
       {
       		cout<<2*c<<endl;
       }
       long long int size=v.size();

       for (long long int i = 0; i < size; ++i)
       {
       		cout<<v[i].first<<" "<<v[i].second<<endl;
       }
       if (f==1)
       {
       	cout<<val<<" "<<val<<endl;
       }
       for (long long int i = 0; i < size; ++i)
       {
       		cout<<v[size-i-1].second<<" "<<v[size-1-i].first<<endl;
       }
		return 0;
    }