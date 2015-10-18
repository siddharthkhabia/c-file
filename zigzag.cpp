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
        string A;
        int B;
        cin>>A;
        cin>>B;
        if (B==1)
        {
            cout<<A<<endl;
            return 0;
            /* code */
        }
        string ans;
        for (int i = 0; i < A.size(); i+=(B-2)*2+2)
        {
            ans.push_back(A[i]);
            /* code */
        }
        int c=0;

        for (int i = 1; i < B-1; ++i)
        {   
            c=0;
            for (int j = i; j < A.size(); ++j)
            {
               // cout<<"yellow wurld"<<endl;
                ans.push_back(A[j]);
                cout<<c<<"  "<<A[j]<<endl;
                if (c%2==0)
                {
                    j+=(B-i-1)*2-1;
                    /* code */
                }
                else{
                    j+=2*i-1;
                }
                c++;
                /* code */
            }
            /* code 
            */
        }

        for (int i = B-1; i < A.size(); i+=(B-2)*2+2)
        {
            ans.push_back(A[i]);
            /* code */
        }
        cout<<ans<<endl;
    	/* code */
    	return 0;
    }