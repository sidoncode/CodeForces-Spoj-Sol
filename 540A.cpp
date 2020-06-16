#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    string a;
    string b;

    cin>>a;
    cin>>b;
    int ans  =0;

    for(int i = 0;i<n;i++){

        ans = ans + min(10-abs(a[i]-b[i]),abs(a[i] -b[i]));

    }

    cout<<ans<<endl;
    return 0;    
}