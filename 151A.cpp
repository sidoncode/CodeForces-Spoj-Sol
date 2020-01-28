#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,nl,np,p;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min(min(k*l /nl,c*d),p/np)/n<<endl;
    return 0;
}