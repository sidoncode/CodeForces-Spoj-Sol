#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s; 
    cin>>s;
    int smoves = 0;
    int len = s.length();
    int strt = 0;
    int walk;
    for(int i=0;i<len;i++){
        int index = s[i]-97;
        walk = abs(strt -index);
        if(walk < 13){
            smoves = smoves + walk;
        }
        else{
            smoves += 26 - walk;
        }
        strt= index;
    }
    cout<<smoves<<endl;
    return 0;    
}