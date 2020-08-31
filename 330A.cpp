#include<bits/stdc++.h>
//#include<conio.h>

using namespace std;

int main(){

    int r;
    int c;
    int j;
    string s;

    int row[11] = {0};
    int col[11] = {0};


    cin>>r>>c;
    for(int i=0;i<r;i++){
        cin>>s;

        for(j=0;j<c;j++){
            if(s[j] == 'S'){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    int  cakes(0);

    for(int i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(row[i]==0 || col[j] ==0){
                cakes =cakes+1;
            }
        }
    }
    cout<<cakes<<endl;

    //getch();
    return 0;
}