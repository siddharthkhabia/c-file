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
        void swapem(ListNode *a){
            if (a==NULL|| a->next==NULL)
            {
                return;
                /* code */
            }
            else{
                int temp;
                temp=a->val;
                a->val=a->next->val;
                a->next->val=temp;
                swapem(a->next->next);
            }
            return;

        }
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

    	swapem(A);
        while(A!=NULL){
            cout<<A->val;
            A=A->next;
        }

    	return 0;
    }