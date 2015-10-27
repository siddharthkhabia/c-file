#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
      
      int foo(string S,string T,std::vector<std::vector<int> > &tab,int a,int b)
      {
        if (b<0)
        {
            return 1;
        }
        if (a<0)
        {
            return 0;
        }
        else if (tab[a][b]>=0)
        {
            return tab[a][b];
        }
        else if (S[a]==T[b])
        {
            tab[a][b]=foo(S,T,tab,a-1,b-1)+foo(S,T,tab,a-1,b);
            return tab[a][b];
        }
        else
        {
            tab[a][b]=foo(S,T,tab,a-1,b);
            return tab[a][b]; 
        }
      }

    int main(int argc, char const *argv[])
    {
		string S;
		cin>>S;
        string T;
        cin>>T;
        std::vector<int> v(T.size(),-1);
        std::vector<std::vector<int> > tab(S.size(),v);
        int sum=0;
        sum=foo(S,T,tab,S.size()-1,T.size()-1);
        cout<<sum<<endl;
    	return 0;
    }