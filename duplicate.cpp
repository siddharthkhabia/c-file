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
    int main(int argc, char const *argv[])
    {
    	ListNode *A=NULL;
    	//int B;
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

    	ListNode* trav;
    	ListNode* t2;
    	int v=A->val;
    	trav=A->next;
    	t2=A;
    	while(trav!=0){
    		if (trav->val!=v)
    		{
    			v=trav->val;
    			t2=t2->next;
    			/* code */
    		}else{
    			t2->next=trav->next;
    		}
    		trav=trav->next;

    	}
    	while(A!=NULL){
    		cout<<A->val<<endl;
    		A=A->next;
    	}
    	/* code */
    	return 0;
    }