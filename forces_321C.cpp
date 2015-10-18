#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    void foo(std::vector<int> &v,std::vector<std::vector<int> > &tab,int count,int node,int *ans,int m,std::vector<int> &a)
    {
        if ((v[node]+count)>m)
        {
            return;
        }
        else
        {
            if (v[node]==1)
            {
                count++;
            }
            else
            {
                count=0;
            }
            if (tab[node].size()==1)
            {
                (*ans)++;
                return;
            }
            else
            {
                for (int i = 0; i < tab[node].size(); ++i)
                {
                    if (a[tab[node][i]]==0)
                    {
                        a[tab[node][i]]=1;
                        foo(v,tab,count,tab[node][i],ans,m,a);
                        /* code */
                    }
                    
                    /* code */
                }
            }

        }

    }
      
    int main(int argc, char const *argv[])
    {

    	int n;
    	int m;
    	cin>>n>>m;
    	std::vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
            /* code */
        }
        std::vector<std::vector<int> > tab(n);
        for (int i = 0; i < n-1; ++i)
        {
            int t1,t2;
            cin>>t1>>t2;
            tab[t1-1].push_back(t2-1);
            tab[t2-1].push_back(t1-1);
            /* code */
        }
        // for (int i = 0; i < tab.size(); ++i)
        // {
        //     for(int j=0;j<tab[i].size();j++)
        //         {
        //             cout<<tab[i][j]<<"  ";
        //         }
        //         cout<<endl;
        //     /* code */
        // }
        std::vector<int> a(n,0);
        int count=0;
        int c=0;
        int *ans;
        ans=&c;
        if (v[0]==1)
        {
            count=1;
            /* code */
        }
        a[0]=1;
        for (int i = 0; i < tab[0].size(); ++i)
        {
            foo(v,tab,count,tab[0][i],ans,m,a);
            /* code */
        }

        cout<<c<<endl;
    	return 0;
    }