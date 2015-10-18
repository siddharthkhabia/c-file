#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
    using namespace std;
    int main(int argc, char const *argv[])
    {
    	/* code */
    	int n=0,m;
    	cin>>n>>m;
    	std::vector<int> v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}	
    	std::vector<pair<int,int> > vi;

    	for (int i = 0; i < n; ++i)
    	{
    		/* code */
    		int maxx=i,minn=i;
    		for(int j=i+1;j<n;++j){
    			if(v[j]>v[i]){
    				maxx=j-1;
    				break;
    			}else{
    				maxx++;
    			}
    		}
    		for(int j=i-1;j>-1;j--){
    			if(v[j]>=v[i]){
    				minn=j+1;
    				break;
    			}else{
    				minn--;
    			}
    		}
    		//cout<<maxx<<minn<<endl;
    		vi.push_back(make_pair(v[i],((1+i-minn)*(1+maxx-i))));
    	}
    	sort(vi.begin(),vi.end());
    	// cout<<"sorted :"<<endl;

    	// for (int i = 0; i < n; ++i)
    	// {
    	// 	/* code */
    	// 	cout<<vi[i].first<<" "<<vi[i].second<<endl;
    	// }
    	while(m--){
    		char type,player;
    		int k;
    		cin>>type>>k>>player;
    		if (type=='>')
    		{
    			 int f_sum=0;
    			 for (int i = 0; vi[i].first > k ; ++i){
    			 	f_sum+=vi[i].second;
    			 	f_sum%=2;
    			 }
    			 if (f_sum==0)
    			 {
    			 	if (player=='D')
    			 	{
    			 		cout<<"C"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"D"<<endl;
    			 	}
    			 	/* code */
    			 }else{
    			 	if (player=='D')
    			 	{
    			 		cout<<"D"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"C"<<endl;
    			 	}

    			 }
    			 
    			/* code */
    		}
    		else if (type=='<')
    		{
    			int f_sum=0;
    			 for (int i = vi.size()-1; vi[i].first > k ; --i){
    			 	f_sum+=vi[i].second;
    			 	f_sum%=2;
    			 }
    			 if (f_sum==0)
    			 {
    			 	if (player=='D')
    			 	{
    			 		cout<<"C"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"D"<<endl;
    			 	}
    			 	/* code */
    			 }else{
    			 	if (player=='D')
    			 	{
    			 		cout<<"D"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"C"<<endl;
    			 	}

    			 }
    			/* code */
    		}
    		else if (type=='='){
    			int f_sum=0;
    			for (int i = 0; i < vi.size(); ++i)
    			{
    				
    				if (vi[i].first==k)
    				{
    					f_sum=vi[i].second%2;
    				}
    			}
    				if (f_sum==0)
    			    {
    			 	if (player=='D')
    			 	{
    			 		cout<<"C"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"D"<<endl;
    			 	}
    			 	/* code */
    			 }else{
    			 	if (player=='D')
    			 	{
    			 		cout<<"D"<<endl;
    			 		/* code */
    			 	}else{
    			 		cout<<"C"<<endl;
    			 	}

    			 }
    					/* code */
    				
    				

    				
    				/* code */
    			
    		}

    	}

    	return 0;
    }