#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    void heapify(std::vector<pair<int,int> > &v,int ind)
    {
    	if (v.size()>(ind*2+2))
    	{
    		if (v[ind].first <v[ind*2+1].first&&v[ind].first<v[ind*2+2].first)
    	    	{
    	    		return;
    	    		/* code */
    	    	}
    	    	else
    	    	{
    	    		if(v[ind*2+1].first<v[ind*2+2].first)
    	    		{
    	    			swap(v[ind*2+1],v[ind]);
    	    			heapify(v,ind*2+1);
    	    		}
    	    		else
    	    		{
    	    			swap(v[ind*2+2],v[ind]);
    	    			heapify(v,ind*2+2);
    	    		}
    	    	}
    	}
    	else if (v.size()>(ind*2+1))
    	{
    		if (v[ind]<v[ind*2+1])
    	    	{
    	    		return;
    	    		/* code */
    	    	}
    	    else
    	    {
    	    	swap(v[ind*2+1],v[ind]);
    	    	heapify(v,ind*2+1);
    	    }
    	}
    	else
    	{
    		return;
    	}

    }
    bool foo(pair<int ,int > a,pair<int ,int> b)
    {
    	return(a.first>b.first);
    }
    struct ListNode {
       int val;
       ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
    }; 
    int main(int argc, char const *argv[])
    {
    	std::vector<ListNode*> A;
    	int n;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    		int k;
    		cin>>k;
    		if (k==0)
    		{
    			A.push_back(NULL);
    			/* code */
    		}
    		else
    		{
    			int temp;
    			cin>>temp;

	    		ListNode *p=new() ListNode(temp);
	    		ListNode *tr=p;
	    		//tr=tr->next;
	    		for(int j=1;j<k;j++)
	    		{
	    			cin>>temp;
	    			tr->next=new() ListNode(temp);
	    			tr=tr->next;

	    		}
	    		A.push_back(p);
    	    }
    		/* code */
    	}
    	std::vector<pair<int,int> > hp;
    	for (int i = 0; i < A.size(); ++i)
    	{
    		if (!(A[i]==NULL))
    		{
    			hp.push_back(make_pair(A[i]->val,i));
    			A[i]=A[i]->next;
    		}
    	}
    	make_heap(hp.begin(),hp.end(),foo);
    	ListNode *ans=new() ListNode(hp[0].first);
    	ListNode *tra=ans;
    	while(!hp.empty())
    	{
    		if (A[hp[0].second]==NULL)
    		{
    			hp.erase(hp.begin());
    			/* code */
    		}else
    		{
    			hp[0].first=A[hp[0].second]->val;
    			A[hp[0].second]=A[hp[0].second]->next;
    		}
    		make_heap(hp.begin(),hp.end(),foo);
    		//heapify(hp,0);
    		if (hp.empty())
    		{
    			break;
    			/* code */
    		}
    		cout<<"heapified : "<<endl;
    		for (int i = 0; i < hp.size(); ++i)
    		{
    			cout<<hp[i].first<<" ";
    		}
    		cout<<endl;
    		tra->next=new() ListNode(hp[0].first);
    		tra=tra->next;
    	}
    	while(ans!=NULL)
    	{
    		cout<<ans->val<<"->";
    		ans=ans->next;
    	}
    	cout<<"NULL"<<endl;

    	return 0;
    }