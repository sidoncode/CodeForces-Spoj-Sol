#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    int t;
    cin>>t;
    while (t-->0){
        cin>>x>>y>>z;
        sumx = sumx  +x;
        sumy = sumy  +y;
        sumz = sumz  +z;
    }
    if(sumx == 0 && sumy == 0 && sumz == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

}