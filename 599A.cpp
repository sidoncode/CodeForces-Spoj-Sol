#include<iostream>
#include<algorithm>
#include<set>
#include<numeric>
#include<conio.h>


using namespace std;
int main(){
    set <int> s1;
    set <int> :: iterator it;
    int n;
    for(int i=0;i<3;i++){
        cin>>n;
        s1.insert(n);
    }
    for(it=s1.begin();it!=s1.end();it++){
        cout<<*it;
    }
    int x;
    x = accumulate(s1.begin(),s1.end(),0);
    cout<<x<<endl;
    getch();
    return 0;
}