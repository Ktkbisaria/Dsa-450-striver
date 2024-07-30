#include<bits/stdc++.h>
using namespace std;

void nForest(int n) {
     
    int x;
    for(int i=1;i<=n;i++){
         x=i;
       for(int j=0;j<i;j++){
            cout<<x;
            cout<<" ";
             x=x+1;
            
        }
        cout<<endl;
    }
}
	
   
   
   
   
   


int main() {
    int t;
    cin>>t;
    for(int m=0;m<t;m++) {
        int n;
        cin>>n;
         nForest(n);
    }


}
