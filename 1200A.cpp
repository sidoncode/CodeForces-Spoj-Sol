#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    string s;
    string s1;
    cin>>s;
    cout<<endl;
    cin>>s1;
    if(s == '1'){
        cout<<"okay"<<endl;
    }
    else if (s1 == s){
        cout<<"okay 2"<<endl;
    }
    else{
        cout<<"Wrong entry"<<endl;
    }

    getch();
    return 0;    
}