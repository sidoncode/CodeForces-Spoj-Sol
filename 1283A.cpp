#include<bits/stdc++.h>

using namespace std;

int main(){
    int h;
    int m;
    int t;
    int ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h>>m;
        ans = 60-m;
        h++;
        ans = ans + (24-h)*60;
        cout<<ans<<endl;
    }
    return 0;
}