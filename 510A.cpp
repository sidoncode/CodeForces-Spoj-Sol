#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int m;

    string str;
    
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        if(i %2 == 0){
            str="";

            for(int j=1;j<=m;j++){
                str+='#';

            }
        }
        else if((i%2 == 0)&& (i%4 == 0)){
            str+="#";

            for(int j =2;j<=m;j++){
                str+='.';

            }
        }
        else
        {
            str = "";
            for(int j = 2;j<=m;j++){
                str+='.';

            }
            str+='#';
        }

        cout<<str<<endl;
        
    }
    return 0;
}