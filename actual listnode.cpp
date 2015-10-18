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
    	int B;
    	for (int i = 0; i < 5; ++i)
    	{
    		int temp;
    		cin>>temp;
    		ListNode *newn;
    		newn = new ListNode(temp);
    		newn->next=A;
    		A=newn;
    		
    		/* code */
    	}
    	
    	cin>>B;
    	ListNode* ans=NULL;    	
    	ListNode* temp=NULL;
    	//temp=ans;
    	ListNode* trav=A;
    	//int c=0,count=0;
    	while(trav!=NULL){
    		if (trav->val<B)
    		{
    			ListNode* newn;
    			newn = new ListNode(trav->val);
    			newn->next=temp;
    			temp=newn;

    			//c++;
    			/* code */
    		}
    		//count++;
    		trav=trav->next;
    	}
    	ans=temp;
    	trav=A;
    	temp=NULL;
    	while(trav!=NULL){
    		if (trav->val>=B)
    		{
    			//c++;
    			ListNode* newn;
    			newn = new ListNode(trav->val);
    			newn->next=temp;
    			temp=newn;
    			
    			/* code */
    		}
    		trav=trav->next;
    	}
    	if (ans==NULL)
    	{
    		ans=temp;
    		/* code */
    	}
    	else{
    	trav=ans;
    	while(trav->next!=NULL){
    		trav=trav->next;
    	}
    	trav->next=temp;
    	}

    	while(ans!=NULL){
    		cout<<ans->val<<endl;
    		ans=ans->next;
    	}

    	/* code */
    	return 0;
    }