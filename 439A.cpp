#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int d;
    
    cin>>n>>d;
    
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;

    for(int i=0;i<n;i++){
        sum  = sum+a[i];
    }    

    if((n-1) * 10 + sum>d){
        cout<<"-1"<<endl;
    }
    
    else{
        cout<<(d-sum)/5<<endl;
    }
    
    return 0;
}