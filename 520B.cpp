#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,cnt=0,x;
    cin>>n>>m;

    if(m<n)
    {
        cout<<n-m<<endl;
        return 0;
    }
    while(m>n){
        if(m%2==0){
            m/=2;
            cnt++;
        }
        else{
            m++;
            cnt++;
        }
    }
    cout<<abs(cnt+n-m)<<endl;
    return 0;
}