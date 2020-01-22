#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n;
    string var;
    int sum=0;
    cin>>n;
    while (n --> 0 ){
       cin>>var;
       if(var == "Tetrahedron"){
           sum =sum+4;
       }
       if(var =="Cube"){
           sum = sum+6;
       }
       if(var =="Octahedron"){
           sum = sum+8;
       }
       if(var =="Dodecahedron"){
           sum = sum+12;
       }
       if(var =="Icosahedron"){
           sum = sum+20;
       }
    }
    cout<<sum<<endl;   
}