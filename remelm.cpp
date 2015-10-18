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
    	std::vector<int> A;
    	for (int i = 0; i < 5; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	int B;
    	cin>>B;
    	int i,j;
    	i=0;
    	j=0;
    	while(A[j]!=B){
    		j++;
    		if (j==A.size())
    		{
    			break;
    			/* code */
    		}
    	}
    	if (j==A.size())
    	{
    		cout<<"no change \t"<<A.size()<<endl;
    		return A.size();
    		/* code */
    	}
    	int ans=j;
    	while(A[j]==B){
    		j++;
    		if (j==A.size())
    		{
    			break;
    			/* code */
    		}
    	}
    	if (j==A.size())
    	{
    		cout<<"already sorted\t"<<ans<<endl;
    		return ans;
    		/* code */
    	}

    	while(j<A.size()){
    		if (A[i]==B)
    		{
    			swap(A[i],A[j]);
    			while(A[j]==B){
    				j++;
    				if (j==A.size())
    				{
    					break;
    					/* code */
    				}
    			}


    			/* code */
    		}else{
    			i++;
    		}
    		
    	}
    	j=A.size()-1;
    	while(A[j]==B){
    		j--;
    	}
    	cout<<j+1<<endl;
    	/* code */
    	return j+1;
    }