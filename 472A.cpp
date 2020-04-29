#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    
    int n;

    cin>>n;

    if(n%2 == 0){

        cout<< n - 4 << " 4" <<endl;

    }
    else
    {
        cout<< n - 9 << " 9" <<endl;
    }
    
    getch();
    return 0;
}