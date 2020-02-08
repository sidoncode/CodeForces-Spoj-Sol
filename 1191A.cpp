#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin>>n;

    int a = n%4;

    if(a == 1){
        cout<<"0"<<" "<<"A"<<endl;
    }
    
    else if(a == 2){
        cout<<"1"<<" "<<"B"<<endl;
    }
    
    else if (a == 3){
        cout<<"2"<<" "<<"A"<<endl;
    }
    
    else if (a==0){
        cout<<"1"<<" "<<"A"<<endl;
    }


    return 0;
}