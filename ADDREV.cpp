#include<bits/stdc++.h>

using namespace std;


int main(){
    
    
    int n1;
    int n2;

    cin>>n1;
    cin>>n2;
    
    int r= 0;
    int r1  = 0;

    while (n1 != 0){
        r = r*10;
        r = r + n1%10;
        n1 = n1 /10;
    }

    while ( n2 != 0){
        r1 = r1 *10;
        r1 = r1 + n2%10;
        n2 = n2/10;
    }
    int res;
    res = r + r1;
    
    int sum =0;
    
    while (res != 0){
        sum = sum *10;
        sum = sum + res%10;
        res = res/10;
    }
    cout<<sum<<endl;

    return 0;
}