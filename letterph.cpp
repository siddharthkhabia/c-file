#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
      void work (string A,std::vector<string> &p,string s,char c,int index){
      		
      		s.append(index,c);
      		string s1=s;
    		string s2=s;
    		string s3=s;
    		string s4=s;
      		if (index==A.size())
      		{
      			p.push_back(s);
      		}
      		else{
      			if (A[index]=='1'||A[index]=='0')
    	{
    		
    		work(A,p,s1,A[index],index+1);
    		/* code */
    	}
    	else {
    		switch (A[index]){

    			case'2':
    			
    			work(A,p,s1,'a',index+1);
    			work(A,p,s2,'b',index+1);
    			work(A,p,s3,'c',index+1);
    			break;
    			case'3':
    			
    			work(A,p,s1,'d',index+1);
    			work(A,p,s2,'e',index+1);
    			work(A,p,s3,'f',index+1);
    			break;
    			case'4':
    			
    			work(A,p,s1,'g',index+1);
    			work(A,p,s2,'h',index+1);
    			work(A,p,s3,'i',index+1);
    			break;
    			case'5':
    			
    			work(A,p,s1,'j',index+1);
    			work(A,p,s2,'k',index+1);
    			work(A,p,s3,'l',index+1);
    			break;
    			case'6':
    			
    			work(A,p,s1,'m',index+1);
    			work(A,p,s2,'n',index+1);
    			work(A,p,s3,'o',index+1);
    			break;
    			case'7':
    			
    			work(A,p,s1,'p',index+1);
    			work(A,p,s2,'q',index+1);
    			work(A,p,s3,'r',index+1);
    			work(A,p,s4,'s',index+1);
    			break;
    			case'8':
    			
    			work(A,p,s1,'t',index+1);
    			work(A,p,s2,'u',index+1);
    			work(A,p,s3,'v',index+1);
    			break;
    			case'9':
    			
    			work(A,p,s1,'w',index+1);
    			work(A,p,s2,'x',index+1);
    			work(A,p,s3,'y',index+1);
    			work(A,p,s4,'z',index+1);
    			break;


    		}


    	}
      	}



      }
    int main(int argc, char const *argv[])
    {
    	int index=0;
    	string A;
    	cin>>A;
    	//vector <string> ans;
    	vector <string> p;
    	if (A.size()==0)
    	{
    		cout<<"null"<<endl;
    		return 0;
    		/* code */
    	}
    	string s1;
    	string s2;
    	string s3;
    	string s4;
    	if (A[index]=='1'||A[index]=='0')
    	{
    		
    		work(A,p,s1,A[index],index+1);
    		/* code */
    	}
    	else {
    		switch (A[index]){

    			case'2':
    			
    			work(A,p,s1,'a',index+1);
    			work(A,p,s2,'b',index+1);
    			work(A,p,s3,'c',index+1);
    			break;
    			case'3':
    			
    			work(A,p,s1,'d',index+1);
    			work(A,p,s2,'e',index+1);
    			work(A,p,s3,'f',index+1);
    			break;
    			case'4':
    			
    			work(A,p,s1,'g',index+1);
    			work(A,p,s2,'h',index+1);
    			work(A,p,s3,'i',index+1);
    			break;
    			case'5':
    			
    			work(A,p,s1,'j',index+1);
    			work(A,p,s2,'k',index+1);
    			work(A,p,s3,'l',index+1);
    			break;
    			case'6':
    			
    			work(A,p,s1,'m',index+1);
    			work(A,p,s2,'n',index+1);
    			work(A,p,s3,'o',index+1);
    			break;
    			case'7':
    			
    			work(A,p,s1,'p',index+1);
    			work(A,p,s2,'q',index+1);
    			work(A,p,s3,'r',index+1);
    			work(A,p,s4,'s',index+1);
    			break;
    			case'8':
    			
    			work(A,p,s1,'t',index+1);
    			work(A,p,s2,'u',index+1);
    			work(A,p,s3,'v',index+1);
    			break;
    			case'9':
    			
    			work(A,p,s1,'w',index+1);
    			work(A,p,s2,'x',index+1);
    			work(A,p,s3,'y',index+1);
    			work(A,p,s4,'z',index+1);
    			break;


    		}


    	}
    	cout<<p[2]<<endl;

    	return 0;
    }