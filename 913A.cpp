#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    long long n;
    long long m;
    cin>>n>>m;
    long long m1 = pow(2,n);    
    long long m2 = m % m1;
    cout<<m2<<endl;
    return 0;
}