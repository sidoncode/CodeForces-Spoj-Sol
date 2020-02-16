#include<bits/stdc++.h>

using namespace std;


int main(){
    double r,x,y,x2,y2;
    
    double d;
    
    cin>>r>>x>>y>>x2>>y2;
    
    d = sqrt((x-x2) * (x-x2) + (y-y2) * (y - y2));
    
    cout<<ceil(d / (2*r));
    
    return 0;
}