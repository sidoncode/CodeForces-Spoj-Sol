#include<bits/stdc++.h>

using namespace std;


int main(){

    int a;
    int b;

    int t;
    cin>> t;

    int res;

    int res1;

    for(int i=0;i<t;i++){    
        cin>>a>>b;
        
        res = min(max(a,b*2),max(a*2,b));

        res1 = res*res;
        cout<<res1<<endl;
    }
    return 0;
}