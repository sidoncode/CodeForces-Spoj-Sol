#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int t;

    cin>>t;

    while(t --> 0){    
        int sum = 0;
        cin>>n;

        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            sum = sum + a[i];
        }
        
        if(sum % 2 != 0 || sum == 1){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}