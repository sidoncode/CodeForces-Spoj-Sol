#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    int k;
    string a1;
    string a2;
    cin>>a1;
    cin>>a2;

    for(int i=0;i<5;i++){
        k  =0;
        for(int j=1;j<i+5;j++){
            if(a1[j] = a2[k]){
                k++;
                if(k ==5){
                    cout<<"1"<<endl;
                }
            }
            else{
                cout<<"0"<<endl;
                i = 5;
                break;
            }
        }
    }
}