#include<bits/stdc++.h>
#include<conio.h>

using namespace std;


int main(){
    int t;
    cin>>t;

    int element;

    set <int> s1;
    set <int> :: iterator it;
    
    while (t--){
        cin>>element;
        s1.insert(element);    
    }

    for(it  =s1.begin(); it != s1.end(); ++it){
        cout<<*it;
    
    getch();
    return 0;

}