#include<bits/stdc++.h>
using namespace std;

int main(){
    int count =0;
    long long int x;

    cin>>x;

    while (x >0)
    {
        int m;
        m = x%10;
        /* code */
        if( m==4 || m==7 ){
            
            count++;
        }
        x=x/10;

    }
    if( count ==4 || count == 7){
        cout<<"YES"<<endl;
    } 
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}