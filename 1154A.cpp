#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int v1[100];
    for(int i=0;i<4;i++){
        cin>>v1[i];
    }
    sort(v1,v1+4);
    cout << v1[3]-v1[0] << " " << v1[3]-v1[1] << " " << v1[3]-v1[2] << endl;
    
}