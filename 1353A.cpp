#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    int m;
    int t;
    
    cin>>t;

    while(t--){

        cin>>n>>m;
        if(n ==1){
            cout<<0<<endl;
        }

        if( n >2 ){
            cout<<m*2<<endl;
        }

        if(n ==2){
            cout<<2<<endl;
        }
        }
    return 0;
}