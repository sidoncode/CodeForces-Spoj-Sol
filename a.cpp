#include<bits/stdc++.h>


using namespace std;
    // for the global var; //

    int v;
    int a;
    int r;
    int p;
    int h;

void height();

void  height(){
    int sum = 0;
    sum = a+r+p+v;
    if(sum > h){
        cout<<"WAW"<<endl;
    }
    else if( sum < h){
        cout<<"AWW"<<endl;
    }
}

int main(){
    
    cin>>v>>a>>r>>p>>h;
    
    if( (v==a) && (a == r) && (r == p) && (p == a) ){
    
        cout<<"AWW"<<endl;
    }
    else{
        height();
    }
    return 0;
}