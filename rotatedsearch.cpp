#include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main(int argc, char const *argv[])
    {
        std::vector<int> A;
        int B;
        int t;
        cin>>t>>B;
        while(t--){
            int temp;
            cin>>temp;
            A.push_back(temp);
        }

        int low,high,mid,search,min;
        low=0;
        high=A.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(A[low]<=A[mid]&&A[mid]<=A[high]){
                min=low;
                break;
            }
            else if(A[high]<=A[mid]&&A[low]>=A[mid]){
                min=high;
                break;
            }
            else if(A[mid]>A[low]&&A[mid]>A[high]){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        cout<<min<<endl;
       // cout<<"out of the blues !!"<<endl;
        
        low=0;
        high=A.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            search=(mid+min)%A.size();
            if(A[search]==B){
                cout<<search<<endl;
                return 0;
            }else if (A[search]>B){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        cout<<-1<<endl;
        	/* code */
    	return 0;
    }