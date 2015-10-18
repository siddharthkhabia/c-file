#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    int dfs_1(int a,std::vector<std::vector<int> > &v)
    {
        if (a==1)
        {
           return 1;
        }
        else
        {
            for (int i = 0; i < v[a].size(); ++i)
            {
                 int temp=-1;
                if (temp==v[a][i])
                {
                    continue;
                }
                else
                {
                    temp=v[a][i];
                }
                v[a].erase(v[a].begin()+i);
                if (dfs_1(temp,v))
                {
                    return 1;
                }
                else
                {
                    v[a].insert(v[a].begin()+i,temp);
                }
            }
            return 0;
        }
    }
    int dfs(int a,std::vector<std::vector<int> > &v)
    {
        if (a==v.size()-1)
        {
            if (dfs_1(a,v))
            {
                return 1;
            }
            else
            {
                return 0;
            }
            //return 1;
        }
        else
        {
            for (int i = 0; i < v[a].size(); ++i)
            {
                int temp=-1;
                if (temp==v[a][i])
                {
                    continue;
                }
                else
                {
                    temp=v[a][i];
                }
                v[a].erase(v[a].begin()+i);
                if (dfs(temp,v))
                {
                    return 1;
                }
                else
                {
                    v[a].insert(v[a].begin()+i,temp);
                }
            }
            return 0;
        }
    }
      
    int main(int argc, char const *argv[])
    {
    	int t;
        cin>>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            if (n==1)
            {
                cout<<"Go on get the Magical Lamp"<<endl;
                continue;
            }
            vector< std::vector<int> > v(n+1);
            for (int i = 0; i < m; ++i)
            {
                int a,b;
                cin>>a>>b;
                v[a].push_back(b);
            }
            for (int i = 1 ; i < v.size(); ++i)
            {
                sort(v[i].begin(),v[i].end());
            }
            if(dfs(1,v))
            {
                cout<<"Go on get the Magical Lamp"<<endl;
                continue;
            }
            else
            {
                cout<<"Danger!! Lucifer will trap you"<<endl;
                continue; 
            }

        }
    	
    	return 0;
    }