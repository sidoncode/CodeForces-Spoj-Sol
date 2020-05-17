#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int sum  = 0;
    int i;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a , a +n);

    for(int i = 0 ;i < n;i++){
        sum = sum +a[i];
    }

    cout<<a[n-1]*n-sum<<endl;

    return 0;
}