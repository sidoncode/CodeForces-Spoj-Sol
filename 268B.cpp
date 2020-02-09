#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int fact = 0;
    for(int i=1;i<=n;i++){
        fact = fact + (n-i)*i;
    }
    cout<<fact+n<<endl;
    return 0;
}