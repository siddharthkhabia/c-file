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


    int main(int argc, char const *argv[])
    {
        int n;
        cin>>n;
        std::vector<int> ind(n+1);
        for (int i = 1; i <= n; ++i)
        {
        	int temp;
        	cin>>temp;
        	ind[temp]=i;
        }
        int len=1;
        int cur=0;
        int cl=0;
        for (int i = 1; i <=n; ++i)
        {
        	if (ind[i]>cur)
        	{
        		cur=ind[i];
        		cl++;
        	}
        	else
        	{
        		cur=ind[i];
        		if (cl>len)
        		{
        			len=cl;
        		}
        		cl=1;
        	}
        }
        if (cl>len)
                {
                    len=cl;
                }
        cout<<n-len<<endl;
		return 0;
    }