#include<bits/stdc++.h>


#include<conio.h>

using namespace std;

int main(){
    int t;

    int x;
    int y;
    
    int ans;


    cin>>t;

    while(t--){
        cin>>x;
        cin>>y;

        ans = x%y==0?0:y-(x%y);

        cout<<ans<<endl;

        

    }




    getch();
    return 0;
}