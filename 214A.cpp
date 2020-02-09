#include<bits/stdc++.h>


using namespace std;
 

int main(){
    int a;
    int b;
    int m;
    int n;
    int count =0;
    cin>>n>>m;
    for(b=0;b<=m*m;b++){
        a = m-b*b;
        if(a*a+b == n && a>= 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}