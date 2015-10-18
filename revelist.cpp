#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    using namespace std;
      struct ListNode {
     	 int val;
     	 ListNode *next;
   		 ListNode(int x) : val(x), next(NULL) {}
   		};
   		void rec(ListNode *p1,ListNode *p2, int n,int c);
    int main(int argc, char const *argv[])
    {
    	ListNode *A=NULL;
    	//int B;
    	
        for (int i = 0; i < 1; ++i)
    	{
    		int temp;
    		cin>>temp;
    		ListNode *newn;
    		newn = new ListNode(temp);
    		newn->next=A;
    		A=newn;
    		
    		/* code */
    	}
    	int m,n;
    	cin>>m>>n;
    	if (m==n)
    	{
    		cout<<"A :P";
    		return 0;
    	}
    	int count=1;
    	ListNode *trav;
    	trav=A;
    	ListNode *hp;
    	ListNode *tp,*sp;
    	tp=NULL;
    	while(count<=n){
    		if (count==m-1)
    		{
    			hp=trav;
    		}
    		if (count==n)
    		{
    			sp=trav;
    			
    			if (trav->next!=NULL)
    			{
    				tp=trav->next;
    			}

    		}
    		//cout<<"i work :P"<<endl;
    		if (trav->next!=NULL)
    		{
    			trav=trav->next;
    			count++;
    			/* code */
    		}else{
    			break;
    		}
    		
    	}
    	//cout<<"i work :"<<hp->val<<"\t"<<sp->val<<endl;
    	if (m==1)
    	{
    		hp=A;
    		rec(hp,hp->next,n,1);
    		hp->next=tp;
    		A=sp;
    	}
    	
    	else{
    	rec(hp->next,hp->next->next,n,m);
    	hp->next->next=tp;
    	hp->next=sp;
    	}
    	
    	while( A!=NULL){
    		cout<<A->val<<endl;
    		A=A->next;
    		count++;
    	}
    	return 0;
    }

    void rec(ListNode *p1,ListNode *p2, int n,int c){
    	if (c==n-1)
    	{
    		p2->next=p1;
    		return;
    	}
    	else{
    		rec(p2,p2->next,n,c+1);
    		p2->next=p1;
    		return;
    	}

    }