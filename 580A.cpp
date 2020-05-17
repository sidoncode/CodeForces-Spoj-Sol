#include<bits/stdc++.h>

using namespace std;


int main(){

    int x;
    int i;

    cin>>x;
    
    int l = 1;
    int ml = 1;


    int a[10000];
    for(int i=0;i<x;i++){
        cin>>a[i];
    
        if( i > 0){
            if(a[i] >= a[i -1]){
                l++;
                ml = max(ml,l);
            }
            else{
                l =1;
            }
        }
    }

    cout<<ml<<endl;
    return 0;
}