#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x;
    cin>>x;

    int a[x];
    
    int count =0;

    for(int i=0;i<x;i++){
        cin>>a[i];
    }
        for(int i=0;i<x;i++){    
            if(a[a[a[i]]] == i){
                count++;
            }
        }
        
    if(count >= 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}