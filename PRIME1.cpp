#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    int t;
    int a;
    int b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        for(int j = a ;j<b;j++){
            if(j % 2 != 0){
                cout<<j<<endl;
            }
            else{
                cout<<a<<b<<endl;
            }
        }
    }


    getch();
    return 0;
}