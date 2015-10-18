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
    	
    	cin>>B;
    	ListNode* ans;
    	ans = new ListNode(-1);
    	ListNode* temp;
    	temp=ans;
    	ListNode* trav=A;
    	int c=0,count=0;
    	while(trav!=NULL){
    		if (trav->val<B)
    		{
    			ListNode* newn;
    			temp->val=trav->val;
    			newn = new ListNode(-1);
    			temp->next=newn;
    			temp=temp->next;
    			c++;
    			/* code */
    		}
    		count++;
    		trav=trav->next;
    	}
    	trav=A;
    	while(trav!=NULL){
    		if (trav->val>=B)
    		{
    			c++;
    			ListNode* newn;
    			temp->val=trav->val;
    			if (c==count)
    			{
    				break;
    				/* code */
    			}
    			newn = new ListNode(-1);
    			temp->next=newn;
    			temp=temp->next;

    			/* code */
    		}
    		trav=trav->next;
    	}

    	while(ans!=NULL){
    		cout<<ans->val<<endl;
    		ans=ans->next;
    	}

    	/* code */
    	return 0;
    }