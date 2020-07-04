#include<bits/stdc++.h>

#include<conio.h>

using namespace std;


int main(){

    int x;
    int t;

    cin>>t;

    while(t--){
        cin>>x;

        if((360%(180-x) == 0)){
            cout<<"YES"<<endl;
        }
        
        else
        
            cout<<"NO"<<endl;
        

    }
    getch();
    return 0;
}