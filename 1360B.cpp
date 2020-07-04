#include<bits/stdc++.h>
//#include<conio.h>

using namespace std;


int main(){
    int T;
    int x;

    cin>>T;

    while (T--)
    {
        /* code */
        cin>>x;
        int a[x];

        for(int i = 0;i<x;i++){
            cin>>a[i];
        }

        sort(a,a+x);
        
        int min_val = 10000;


        for(int i = 0;i<x-1;++i){
            min_val = min(min_val,a[i+1] - a[i]);
        }

        cout<<min_val;
        cout<<endl;
    }

//    getch();
    return 0;
}