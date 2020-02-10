#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    map<int,bool> mp;
    
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    m = 0;

    for(int i=n-1;i>= 0;i--){
        if(mp[a[i]]){
            a[i] = -1;
        }
        else{
            mp[a[i]] =1;
            m++;
        }
    }
    
    cout<<m<<endl;

    for(int i=0;i<n;i++){
        if(a[i] != -1){
            cout<<a[i]<<" ";
        } 
    }
    return 0;
}