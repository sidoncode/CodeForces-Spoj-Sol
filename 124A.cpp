#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a;
    int n;
    int b;
    
    cin>>n>>a>>b;

    cout<<min(n-a,b+1)<<endl;

    return 0;   
}


