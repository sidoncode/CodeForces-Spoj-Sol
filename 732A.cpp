#include<bits/stdc++.h>
using namespace std;


int main(){

    int k,r;
    int h =1;
    int i=0;
    int j=1;

    bool b = true;
    
    cin>>k>>r;

    while (b){
        /* code */
        i++;
        h=k*i;

        if(h % 10 == 0 || h%10 == r){
            b = false;
        }

    }
        cout<< i<<endl;

    return 0;
}