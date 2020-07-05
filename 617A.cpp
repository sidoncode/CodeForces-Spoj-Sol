#include<bits/stdc++.h>

#include<conio.h>

using namespace std;


//1,2,3,4, or 5

int main(){
    int x;

    cin>>x;

    if(x ==1){
        cout<<1<<endl;
    }
    else if(x == 2){
        cout<<1<<endl;
    }
    else if(x == 3){
        cout<<1<<endl;
    }
    else if(x == 4){
        cout<<1<<endl;
    }
    else if(x ==5){
        cout<<1<<endl;
    }
    else
    {
        x = (x+4)/5;
        cout<<x<<endl;        
    }
    

    

    getch();
    return 0;
}