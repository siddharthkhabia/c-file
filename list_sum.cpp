#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
     struct ListNode {
     	 int val;
     	 ListNode *next;
   		 ListNode(int x) : val(x), next(NULL) {}
   		};
    int main(int argc, char const *argv[])
    {
    	ListNode *A=NULL;
    	ListNode *B=NULL;
    	for (int i = 0; i < 4; ++i)
    	{
    		int temp;
    		cin>>temp;
    		ListNode *newn;
    		newn = new ListNode(temp);
    		newn->next=A;
    		A=newn;
    		
    		/* code */
    	}
    	//cout<<A->next->val<<"ye bahar ki bat h :P"<<endl;
    	for (int i = 0; i < 3; ++i)
    	{
    		int temp;
    		cin>>temp;
    		ListNode *newn;
    		newn = new ListNode(temp);
    		newn->next=B;
    		B=newn;
    		/* code */
    	}
    	if (A==NULL&&B==NULL)
    	{
    		ListNode *ans=NULL;
    		cout<<"NULL"<<endl;
    		return 0;
    		/* code */
    	}
    	ListNode *ans=new ListNode(-1);
    	ListNode *newn;
    	newn=ans;
    	ListNode *trav;
    	int carry=0;
    	while(A!=NULL && B!=NULL){
    		int temp;
    		temp=carry+A->val+B->val;
    		if (temp<10)
    		{
    			carry=0;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;
    			/* code */
    		}
    		else
    		{
    			carry=temp/10;
    			temp=temp%10;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;

    		}
    		A=A->next;
    		B=B->next;

    	}

    	if (A==NULL&&B==NULL)
    	{
    		if (carry==0)
    		{
    			trav->next=NULL;
    			/* code */
    		}
    		else{
    			newn->val=1;
    		}
    		/* code */
    	}
    	else if (A!=NULL)
    	{
    		while(A!=NULL)
    		{
    			int temp;
    		temp=carry+A->val;
    		if (temp<10)
    		{
    			carry=0;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;
    			/* code */
    		}
    		else
    		{
    			carry=temp/10;
    			temp=temp%10;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;

    		}
    		A=A->next;
    		}
    		if (carry==0)
    		{
    			trav->next=NULL;
    			/* code */
    		}
    		else{
    			newn->val=1;
    		}
    		/* code */
    	}

    	else if (B!=NULL)
    	{
    		while(B!=NULL)
    		{
    			int temp;
    		temp=carry+B->val;
    		if (temp<10)
    		{
    			carry=0;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;
    			/* code */
    		}
    		else
    		{
    			carry=temp/10;
    			temp=temp%10;
    			newn->val=temp;
    			trav=newn;
    			newn = new ListNode(-1);
    			trav->next=newn;

    		}
    		B=B->next;
    		}
    		if (carry==0)
    		{
    			trav->next=NULL;
    			/* code */
    		}
    		else{
    			newn->val=1;
    		}
    		/* code */
    	}

    	while(ans!=NULL)
    	{
    		cout<<ans->val<<endl;
    		ans=ans->next;
           }
    	// 	B=B->next;

    	// 	/* code */
    	// }
    	/* code */
    	return 0;
    }