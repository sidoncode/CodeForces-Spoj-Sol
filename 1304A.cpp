#include<bits/stdc++.h>



using namespace std;


int main(){

    int t;
    cin>>t;


    int a;
    int b;
    int y;
    int x;

    int q;
    int w;
    
    while(t--){

        cin>>x>>y>>a>>b;


        q = y-x;
        w = a+b;

        if(q%w==0){
            cout<<q/w<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
        
    }

    return 0;
}