#include<bits/stdc++.h>
#include<algorithm>
//#include<conio.h>

using namespace std;

int main(){

    int a;
    int b;
    int c;
    int d;

    while (cin>>a>>b>>c>>d)
    {
        /* code */
        if(a+b == c+d || a+c == b+d || a+d == b+c || a+b+c == d || a+c+d == b || a+b+d == c || b+c+d == a){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    



    //getch();
    return 0;
}