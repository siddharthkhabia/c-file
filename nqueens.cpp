#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void foo(std::vector<std::vector<int> > ans,int A,int *c)
    {
    	if (ans.size()==A)
    	{
    		*c=*c+1;
    		for (int i = ans.size()-1; i > -1 ; --i)
    		{
    			for (int j = 0; j < ans[i].size(); ++j)
    			{
    				cout<<ans[i][j]<<"  ";
    				/* code */
    			}
    			cout<<endl;
    			/* code */
    		}
    		cout<<"done !"<<endl;
    	}
    	else
    	{
    		for (int i = 0; i < A; ++i)
    		{
    			int flag=0;
    			for(int j=ans.size()-1;j>=0;j--)
    			{
    				if (ans[j][i]==1)
    				{
    					//cout<<"broken "<<i<<ans.size()<<endl;
    					flag =1;
    					break;
    					/* code */
    				}
    				if ((i-(ans.size()-j))>=0)
    				{
    					if(ans[j][i-(ans.size()-j)]==1)
    					{
    					//cout<<"broken l"<<i<<ans.size()<<endl;
    						flag =1;
    						break;
    					}
    				}
    				if ((i+(ans.size()-j))<=(A-1))
    				{
    					if(ans[j][i+(ans.size()-j)]==1)
    					{
    					//cout<<"broken r"<<i<<ans.size()<<endl;
    						flag =1;
    						break;
    					}
    				}
    			}
    			if (flag==1)
    			{
    				continue;
    			}
    			else{
    				std::vector<std::vector<int> > a;
    				a=ans;
    				std::vector<int> v(A,0);
    				v[i]=1;
    				a.push_back(v);
    				foo(a,A,c);

    			}
    		}


    	}
    }
      
    int main(int argc, char const *argv[])
    {
    	int A;
    	cin>>A;
    	int c=0;
    	int *count;
    	count=&c;
    	std::vector<std::vector<int> > ans;
    	foo(ans,A,count);
    	cout<<"no of possibilities are : "<<c<<endl;
    	return 0;
    }