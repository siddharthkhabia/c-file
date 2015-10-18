#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <map>
    using namespace std;
    
      
    int main(int argc, char const *argv[])
    {
    	list<int > dlist;
    	map <int ,list<int> * > lru;
    for(int i=0;i<5;i++)
    {
    	list<int> *t;
    	dlist.push_back(i+5);
    	list<int >::iterator it;
    	it= dlist.begin();
    	advance(it,dlist.size()-1);
    	t=&*it;
    	lru.insert(pair<int ,list<int> * >(i,t));
    }
    	map <int ,list<int> * >::iterator it;
    	it=lru.find(2);
    	if (it!=lru.end())
    	{
    		cout<<lru.at(it)<<endl;
    	}else{
    		cout<<"nhi mila"<<endl;
    	}

	   	return 0;
    }