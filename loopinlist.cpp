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
    	ListNode *pos;
        for (int i = 0; i < 5; ++i)
    	{
    		int temp;
    		cin>>temp;
    		ListNode *newn;
    		newn = new ListNode(temp);
    		if (i==2)
    		{
    			pos=newn;
    			/* code */
    		}
    		newn->next=A;
    		A=newn;
    		
    		/* code */
    	}
    	ListNode *tr;
    	tr=A;
    	while(tr->next!=NULL){
    		tr=tr->next;
    	}
    	tr->next=pos;
    	cout<<"reached here"<<endl;
    	ListNode *ans=NULL;
    	ListNode *a,*b;
    	a=A;
    	b=A->next->next;
    	int flag=0;
    	ListNode *p;
    	while(b!=NULL){
    		cout<<"working ?"<<endl;
    		if (b->next==NULL)
    		{
    			cout<<"NULL"<<endl;
    			return 0;
    		}
    		if (a==b)
    		{
    			p=a;
    			flag=1;
    			break;
    			/* code */
    		}else{
    			cout<<"i work bc"<<endl;
    			a=a->next;
    			b=b->next->next;
    		}
    		
    	}
    	cout<<"here\t"<<flag<<endl;
    	int count=1;
    	if (flag==0)
    	{
    		cout<<"NULL"<<endl;
    		return 0;
    		/* code */
    	}

    	else{
    		
    		a=a->next;
    		while(a!=p){
    			a=a->next;
    			count++;
    		}

    	}
    	a=A;
    	b=A;
    	for (int i = 0; i < count; ++i)
    	{
    		b=b->next;
    		/* code */
    	}
    	while(a!=b){
    		a=a->next;
    		b=b->next;
    	}
    	ans=a;
    	cout<<"mil gya bhen ka lauda\t"<<ans->val<<endl;
    	return 0;
    }