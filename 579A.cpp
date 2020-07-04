#include<bits/stdc++.h>

using namespace std;

int main(){
    long long  int x;
    int cnt=0;

    cin>>x;

    while(x %2!=0){
        if(x%2 == 1){
            cnt++;
        }
        x=x/2;
    }
    cout<<cnt+1<<endl;
    return 0;
}