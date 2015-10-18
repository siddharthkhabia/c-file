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
        string haystack="this contains a needle and a second needle",needle="need";
        //cin>>haystack;
        //cin>>needle;
        cout<<haystack<<"\n"<<needle<<endl;

    if(needle.empty())
    {
        cout<<"-1"<<endl;
        return -1;
    }
    if(haystack.empty())
    {
        cout<<"-1"<<endl;
        return -1;
            
    }
        long long int ncount=0,ind=0;
        for (int i = 0; i < haystack.size(); ++i)
        {
            if (haystack[i]==needle[ncount])
            {
                ncount++;
                if (ncount==needle.size())
                {
                    cout<<ind<<endl;
                    return ind;
                    
                    /* code */
                }
                
            }
            else{
                    ncount=0;
                    i=ind;
                    ind++;
                }
                /* code */
            /* code */
        }
    	/* code */
        cout<<"-1"<<endl;
    	return -1;
    }