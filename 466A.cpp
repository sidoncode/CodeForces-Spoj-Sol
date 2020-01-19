#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
    int n;
    int m;
    int a; // for ride of n
    int b; // for ride of m 
    cin>>n>>m>>a>>b;
    if(a > b){
        cout<<pow(n,a)<<endl;
    }
    else if(a < b){
        cout<<pow(m,b)<<endl;
    }
    getch();
    return 0;    
}