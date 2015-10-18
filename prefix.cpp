#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
    using namespace std;
    
      
    struct Tree{
        char val;
        struct Tree *left;
        struct Tree *right;
        //struct Tree *up;
    };
    void mtree(Tree *head,string s,int ind){
        if(ind>=s.size()){
            head=NULL;
            cout<<"mar gya"<<endl;
            return;
        }
        else{
        	cout<<"bach gya"<<endl;
            if(head==NULL){
                head=new Tree();
                head->val=s[ind];
                head->right=NULL;
                head->left=NULL;
                mtree(head->left,s,ind+1);
                cout<<head->val<<endl;
            }
            else
            {
                while(  (head->val) != s[ind] )
                {
                    
                    head=head->right;
                    cout<<"doing"<<endl;
                    if(head==NULL){
                        break;
                    }
                }
                cout<<"done"<<endl;
                if(head==NULL){
                    head=new Tree();
                    head->val=s[ind];
                    head->right=NULL;
                    head->left=NULL;
                    mtree(head->left,s,ind+1);
                }
                else
                {
                    mtree(head->left,s,ind+1);    
                }
            }
        
        }
    }
    
    
    bool dtree(Tree *head){
        if( (head->left == NULL) && (head->right == NULL) )
        {
              return true;  
        }
        else
        {
            if(head->right==NULL)
            {
                bool temp;
                temp=dtree(head->left);
                if(temp==true){
                    head->left=NULL;
                    return true;
                }
                else
                {
                    return false;
                }
                
            }
            else
            {
                bool temp;
                temp = dtree(head->right);
                temp = dtree(head->left);
                if(temp == true)
                {
                    head->left=NULL;
                }
                return false;
            }
        }
    }
    
    void ctree(Tree *head,string s,vector<string> &ans,int ind,int i1)
    {
        while(head->val!=s[ind] && head!=NULL){
            head=head->right;        
        }
        if(head==NULL){
                return;
            }
        else
        {
            ans[i1]+=s[ind];
            ctree(head->left,s,ans,ind+1,i1);
        }
    }
    
    int main() {
    vector<string> A;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	string temp;
    	cin>>temp;
    	A.push_back(temp);
    }

    vector<string> ans(A.size(),"");
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    Tree head;
    for(int i=0;i<A.size();i++)
    {
    mtree((head.left),A[i],0);
    }
     // for(int i=0;i<A.size();i++){
     //   bool t = dtree((head.left));
     // }
     
     // for(int i=0;i<A.size();i++)
     // {
     //     ctree((head.left),A[i],ans,0,i);
     // }
    	Tree *p=head.left;
     while(p!=NULL){
     	cout<<p->val<<" ";
     	p=p->right;
     }

    return 0;
   
}
