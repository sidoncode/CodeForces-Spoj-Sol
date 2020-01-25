#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    int n;
    int count;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s.compare(i,3,"xxx")==0){
            count =count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}