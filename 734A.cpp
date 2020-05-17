#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 0;
    int d = 0;char x;

    int t;

    cin>>t;

    

    for(int i = 0;i<t;i++){

        cin>>x;
        if(x == 'A'){
            a++;
        }
        else if(x =='D'){
            d++;
        }
    }
    
    if(a >d){
        cout<<"Anton"<<endl;
    }else if(d >a){
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    
    return 0;
}