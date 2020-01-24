#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string s1;
    int flag = 0;
    cin>>s;
    for(int i=0;i<5;i++){
        cin>>s1;
        if(s[0] ==s1[0] ||s[1] ==s1[1]){
            flag =1;
        }
    }
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}