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
        for (int i = 0; i < 100; ++i)
        {
        	int k=i&(-1*i);
        	cout<<k<<endl;
        }
        
		return 0;
    }