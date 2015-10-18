    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;

    int main()
    {
        int t;
        cin>>t;
         int n,k;
            while(t--){
            cin>>n;
            cin>>k;
            int a,b;
            vector<int> v(n,0);
            int ma=n,mb=0;
                for(int i=0;i<n;i++){
                cin>>a>>b;
                    if(a<ma){
                        ma=a;
                    }
                    if(b>mb){
                    mb=b;
                    }
                    while(a<=b){
                    v[a]++;
                    a++;
                    }
                }
            long long int sum=0;
                for(int i=ma;i<min(k+ma,n);i++){
                sum+=v[i];
                }
                long long int ma1=sum;
                    for(int i=k+ma;i<min(n,mb+1);i++){
                        sum=sum-v[i-k]+v[i];
                        if(sum>ma1){
                        ma1=sum;
                        }
                    }
            cout<<(n*k)-ma1<<endl;
            }
        return 0;
    }
