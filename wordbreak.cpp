#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
    void foo(string A,std::vector<string> &B,std::vector<std::vector<string> > &tab,int ind)
    {
    	if (ind>=A.size())
    	{
    		return;
    	}
    	else if (tab[ind].size() != 0)
    	{
    		return ;
    	}
    	else
    	{
    		//cout<<"foo"<<endl;
    		int i=0;
    		while(B[i][0]!=A[ind] && i<B.size())
    		{
    			i++;
    			if (i>=B.size())
    			{
    				return;
    			}
    		}
    		//cout<<"foo"<<endl;
    		if (B[i][0]!=A[ind])
    		{
    			return;
    		}
    		else
    		{
    			while(B[i][0]==A[ind] && i<B.size())
    			{
    				//cout<<B[i]<<" is being compared to "<<A.substr(ind,B[i].size())<<endl;
	    			while(B[i][0]==A[ind] && A.substr(ind,B[i].size())!=B[i])
	    			{
	    				//cout<<"in here" << i<<endl;
	    				i++;
	    				if (i>=B.size())
	    			{
	    				return;
	    			}
	    			}
	    			//cout<<"foo1"<<endl;
	    			if (B[i][0]==A[ind])		
	    			{
	    				foo(A,B,tab,ind+B[i].size());
	    			//	cout<<"foo2"<<endl;
	    				if (tab[ind+B[i].size()].size() != 0)
	    				{
	    					string s= A.substr(ind,B[i].size()) ;
	    					if ((ind+B[i].size())>=A.size())
	    					{
	    						tab[ind].push_back(s);
	    					}
	    					else
		    				{
		    					for (int j = 0; j < tab[ind+B[i].size()].size()	; ++j)
		    					{
		    						tab[ind].push_back(s+" "+tab[ind+B[i].size()][j]);
		    					}
		    				}
	    				}
	    				else
	    				{
			    			i++;
			    			if (i>=B.size())
			    			{
			    				break;
			    			}
	    					continue ;
	    				}
	    			//	cout<<"foo3"<<endl;
	    			}
	    			i++;
	    			if (i>=B.size())
	    			{
	    				break;
	    			}
	    			
	    		}
	    		//cout<<"foo4"<<endl;
	    		
	    		
    		}

    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	string A;
    	cin>>A;
    	std::vector<string> B;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		string t;
    		cin>>t;
    		B.push_back(t);
    	}

    	sort(B.begin(),B.end());
    	string comp="";
    	int i=0;
    	while(i<B.size())
    	{
    		while(B[i]==comp)
    		{
    			B.erase(B.begin()+i);
    			i++;	
    		}
    		comp=B[i];
    		i++;
    	}
    	// for (int i = 0; i < B.size(); ++i)
    	// {
    	// 	cout<<B[i]<<endl;
    	// }
    	std::vector<string> v;
    	std::vector<std::vector<string> > tab(A.size(),v);
    	//cout<<"foo begins"<<endl;
    	foo(A,B,tab,0);
    	sort(tab[0].begin(),tab[0].end());
    	for (int i = 0; i < tab[0].size(); ++i)
    	{
    		cout<<tab[0][i]<<endl;
    	}
    	return 0;
    }