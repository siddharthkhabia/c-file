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
    	int n;
    	cin>>n;
    	std::vector<string> A;
    	for (int i = 0; i < n; ++i)
    	{
    		string temp;
    		cin>>temp;
    		A.push_back(temp);
    		/* code */
    	}
    	
    	for (int i = 0; i < A.size(); ++i)
    	{
    		std::vector<bool> yn(9,false);
    		for(int j=0;j<A[i].size();j++)
    		{
    			
    			if (A[i][j]!='.')
    			{
    				if (yn[A[i][j]-49]==true)
    				{
    					cout<<"invalid sudoku puzzle"<<endl;
    					return 0;
    					/* code */
    				}
    				else
    				{
    					yn[A[i][j]-49]=true;
    				}
    			}
    		}
    	}
    	for (int i = 0; i < A.size(); ++i)
    	{
    		std::vector<bool> yn(9,false);
    		for(int j=0;j<A.size();j++)
    		{
    			
    			if (A[j][i]!='.')
    			{
    				if (yn[A[j][i]-49]==true)
    				{
    					cout<<"invalid sudoku puzzle"<<endl;
    					return 0;
    					/* code */
    				}
    				else
    				{
    					yn[A[j][i]-49]=true;
    				}
    			}
    		}
    	}

    	for (int i = 0; i < 9; i=i+3)
    	{
    		for(int k=0;k<9;k=k+3)
    		{
    			std::vector<bool> yn(9,false);
    			for(int j=i;j<i+3;j++)
    			{
    				for(int l=k;l<k+3;l++)
    				{
    					if (A[j][l]!='.')
    					{
    						if (yn[A[j][l]-49]==true)
    						{
    							cout<<"invalid sudoku puzzle"<<endl;
    							return 0;
    					/* code */
    						}
    						else
    						{
    							yn[A[j][l]-49]=true;
    						}
    					}
    				}
    			}
    		}
    		
    	}
    	cout<<"valid sudoku"<<endl;
    	return 1;
    }