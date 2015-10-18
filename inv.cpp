#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    

    int cinv(int *ar,int a,int b)
{
    if(a==b)
    {
        return 0;
    }
    else
    {
        int count=0,c=0;
        int x,y;
        x=cinv(ar,a,(a+b)/2);
        y=cinv(ar,(a+b)/2+1,b);
        //cout<<"a is "<<a<<" ans b is "<<b<<endl;
        //cout<<"x is "<<x<<" and y is "<<y<<endl;
        int arr[b-a+1];
        int p1=a,p2=(a+b)/2+1;
        while((p1<=((a+b)/2)) && (p2<=(b)))
        {
            if(ar[p1]<=ar[p2])
            {
            	//cout<<"p1 is "<<p1<<" and p2 is "<<p2<<endl;
                arr[c]=ar[p1];
                p1++;
                c++;
            }
            else if(ar[p2]<ar[p1])
            {
            	//cout<<"p1 is "<<p1<<" nad p2 is "<<p2<<endl;
                arr[c]=ar[p2];
                p2++;
                count+=((a+b)/2)-p1 + 1 ;
            	c++;
            }
           
        }
        if (p2>b)
        {
        	while(p1<=(a+b)/2)
        	{
        		arr[c]=ar[p1];
        		p1++;
        		c++;
        	}
        	/* code */
        }
        else if (p1>(a+b)/2)
        {
        	while(p2<=b)
        	{
        		arr[c]=ar[p2];
        		p2++;
        		c++;
        	}
        	/* code */
        }
        for(int i=0;i<b-a+1;i++)
        {
        	ar[i+a]=arr[i];
        }
        // cout<<"the count being returned is : "<<count<<endl;
        // for (int i = 0; i<5; ++i)
        // {
        //     cout<<ar[i]<<" ";
        //     /* code */
        // }
        // cout<<endl;
        return (count+x+y);
    }
    
    
}
      
    int main(int argc, char const *argv[])
    {
    	std::vector<int> A;
    	int k;
    	cin>>k;
    	for (int i = 0; i < k; ++i)
    	{
    		int temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	
    	int ar[A.size()];
	    
	    for(int i=0;i<A.size();i++)
	    {
	        ar[i]=A[i];
	    }
	    
	    int c;
	    
	    c=cinv(ar,0,A.size()-1);

	    cout<<c<<endl;
	    return 0;
    }