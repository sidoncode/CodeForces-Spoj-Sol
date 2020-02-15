#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int x= 0;
    int y=0;
    string s;
    
    cin>>n;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i] == 'L'){
            x++;
        }
        else{
            y++;
        }
    }
    cout<<x+y+1<<endl;

    return 0;
}