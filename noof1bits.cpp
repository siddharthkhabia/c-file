#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    int main(int argc, char const *argv[])
    {
    	unsigned int A;
    	cin>>A;
    	unsigned int a=A;
    	int count=0;
    	while(a>0){
        		if(a&1){
        			count++;
        		}
        		a=a>>1;
    	}
    	cout<<count<<endl;
    	return count;
    	/* code */
    	//return 0;
    }