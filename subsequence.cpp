#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#define pi 3.14159265
    using namespace std;

    void foo(std::vector<long long int> &val,std::vector<std::vector<long long int > > &table,long long int row , long long int col)
    {
        if(row==0)
        {
            table[col][row]=1;
            return ;
        }
        table[col][row]=0;
        for (int i = col+1; i < table.size(); ++i)
        {
            if (val[i]>val[col])
            {
                if (table[i][row-1]==-1)
                {
                    foo(val,table,row-1,i);
                    //cout<<i<<" "<<row-1<<" "<<table[i][row-1]<<endl;
                    table[col][row]+=table[i][row-1];
                }
                else
                {
                    table[col][row]+=table[i][row-1];
                }
            }
        }
    }


    int main(int argc, char const *argv[])
    {
        long long int n,k;
        cin>>n>>k;
        k++;
        if (k==1)
        {
            cout<<n<<endl;
            return 0;
        }
        if (k>n)
        {
            cout<<"0\n";
            return 0;
        }
        std::vector<long long int> val;
        for (long long int i = 0; i < n; ++i)
        {
            long long int temp;
            scanf("%lld",&temp);
            val.push_back(temp);
        }
        std::vector<long long int> v(k,-1);
        std::vector<std::vector<long long int > > table(n,v);
		for (int i = 1; i < k; ++i)
        {
            table[n-1][i]=0;
        }
        table[n-1][0]=1;
        //table[n-2][0]=1;
        long long int sum = 0 ;
        for (int i = n-2; i >=0 ; --i)
        {
            foo(val,table,k-1,i);
            sum+=table[i][k-1];
        }
        // for (int i = 0; i < n; ++i)
        // {
        //     for (int j = 0; j < table[i].size(); ++j)
        //     {
        //         cout<<table[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout<<sum<<endl;
        return 0;
    }