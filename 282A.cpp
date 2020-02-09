#include<iostream>
//#include<conio.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x =0;
    string s;
    while (t --> 0){
        cin>>s;
        if(s[1] =='+'){
            ++x;
        }
        else{
            --x;
        }        
    }
    cout<<x<<endl;
    /**getch();
    return 0;    **/
}