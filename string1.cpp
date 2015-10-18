#include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    #include <string>
    using namespace std;
    int main(int argc, char const *argv[])
    {
        std::vector<string> A;
        int t;
        cin>>t;
        for (int i = 0; i < t; ++i)
        {
            string temp;
            cin>>temp;
            A.push_back(temp);
            /* code */
        }

        string ans="";
        //cout<<"works fine till now"<<endl;
        for (int i = 0; i < A[0].size(); ++i)
        {   
            if (A[0][i]==A[1][i])
            {
                ans.push_back(A[0][i]);
                /* code */
            }else{
                break;
            }

            /* code */
        }
        for (int i = 2; i < A.size(); ++i)
        {
            for(int j=0;j<ans.size();++j)
                {
                    if(ans[j]!=A[i][j]){
                        ans.erase(ans.begin()+j, ans.end());
                        break;
                    }
            
                }
            /* code */
        }
        cout<<ans<<endl;
    	/* code */
    	return 0;
    }