    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;

    int main(int argc, char const *argv[])
    {
   	 	/* code */
   	 	int t;
   	 	cin>>t;
   	 	while(t--){
   	 		long long int n;
   	 		cin>>n;
   	 		if(n<4){
   	 			cout<<n<<endl;
   	 		}
   	 		else{
   	 			long long int c,os,es;
   	 			c=3;
   	 			os=4;
   	 			es=2;
   	 			while(n>os && n>es){
   	 					if(os>es){
   	 						es+=os+1;
   	 						c++;
   	 					}else{
   	 						os+=es+1;
   	 						c++;
   	 					}

   	 			}
   	 			cout<<c<<endl;
   	 		}
   	 	}
    	return 0;
    }