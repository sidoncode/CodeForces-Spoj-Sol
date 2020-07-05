#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char s[101];
    int count=0;

    cin>>n>>s;

    for(int i =0;i<n;i++){
        if(s[i] >= 65 && s[i] <=90){
            s[i] = 97+s[i]-65;
        }
    }


    sort(s,s+n);

    for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1]){
            count++;
        }
    }

    if(count ==25){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
    return 0;
}