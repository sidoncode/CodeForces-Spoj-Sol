#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    int n;

    int a[1001];
    int b[1001];

    cin>>n;
    

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int m;
    
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    cout<<a[n-1]<<" "<<b[m-1]<<endl;

    getch();
    return 0;
}