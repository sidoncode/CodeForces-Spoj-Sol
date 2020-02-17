#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    long long  n;
    long long  m;
    long long  z;
    
    cin>>n>>m>>z;
    long res = m*n/__gcd(m,n);
    cout<<(z/res);
    cout<<endl;

    return 0;
}