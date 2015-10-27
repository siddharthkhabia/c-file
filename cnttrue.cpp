#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
        
     void foo(string A,std::vector<std::vector<pair<int ,int > > > &tab,int a,int b)
     {  
        if (a==b)
        {
            if (A[a]=='T')
            {
                tab[a][b].first=1;
                tab[a][b].second=0;
            }
            else
            {
                tab[a][b].first=0;
                tab[a][b].second=1;
            }
            return ;
        }
        else if(tab[a][b].first!=-1)
        {   
            return ;
        }
        else
        {
            int sum1=0,sum2=0,mod=1003;
            for (int i = a+1; i < b; ++i)
            {
                 foo(A,tab,a,i-1);
                 foo(A,tab,i+1,b);
                
                if (A[i]=='|')
                {
                    sum1+=(tab[a][i-1].first * tab[i+1][b].second);
                    sum1%=mod;
                    sum1+=(tab[a][i-1].first * tab[i+1][b].first);
                    sum1%=mod;
                    sum1+=(tab[a][i-1].second * tab[i+1][b].first);
                    sum1%=mod;
                    sum2+=(tab[a][i-1].second * tab[i+1][b].second);
                    sum2%=mod;
                }
                else if (A[i]=='&')
                {
                    sum1+=(tab[a][i-1].first * tab[i+1][b].first);
                    sum1%=mod;

                    sum2=(tab[a][i-1].first * tab[i+1][b].second);
                    sum2%=mod;
                    sum2+=(tab[a][i-1].second * tab[i+1][b].first);
                    sum2%=mod;
                    sum2+=(tab[a][i-1].second * tab[i+1][b].second);
                    sum2%=mod;
                }
                else
                {
                    sum1+=(tab[a][i-1].second * tab[i+1][b].first);
                    sum1%=mod;
                    sum1+=(tab[a][i-1].first * tab[i+1][b].second);
                    sum1%=mod;

                    sum2+=(tab[a][i-1].second * tab[i+1][b].second);
                    sum2%=mod;
                    sum2+=(tab[a][i-1].first * tab[i+1][b].first);
                    sum2%=mod;
                }    
            }
            tab[a][b].first=sum1;
            tab[a][b].second=sum2;
            return;
        }

     } 
     
    int main(int argc, char const *argv[])
    {
        string A;
        cin>>A;
        if (A.size()==1)
        {
            if (A[0]=='T')
            {
                    return 1;
            }
            else
            {
                return 0;
            }
        }
        pair<int,int> t(-1,-1);
        std::vector<pair<int,int> > v(A.size(),t);
        std::vector<std::vector<pair<int,int> > > tab(A.size(),v);
        int sum=0;
        int mod = 1003;
        for (int i = 1; i < A.size(); i=i+2)
        {
            foo(A,tab,0,i-1);
            foo(A,tab,i+1,A.size()-1);
            if (A[i]=='|')
            {
                sum+=(tab[0][i-1].first * tab[i+1][A.size()-1].second);
                sum%=mod;
                sum+=(tab[0][i-1].first * tab[i+1][A.size()-1].first);
                sum%=mod;
                sum+=(tab[0][i-1].second * tab[i+1][A.size()-1].first);
                sum%=mod;
            }
            else if (A[i]=='&')
            {
                sum+=(tab[0][i-1].first * tab[i+1][A.size()-1].first);
                sum%=mod;
            }
            else
            {
                sum+=(tab[0][i-1].second * tab[i+1][A.size()-1].first);
                sum%=mod;
                sum+=(tab[0][i-1].first * tab[i+1][A.size()-1].second);
                sum%=mod;
            }
                        cout<<sum<<" for i "<<i<<endl;
                        cout<<tab[0][i-1].first<<" "<<tab[0][i-1].second<<endl;

        }
        cout<<sum<<endl;
		return 0;
    }