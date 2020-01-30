#include <bits/stdc++.h>
#include<conio.h>

using namespace std;


int main(){

    long n; 
    long long t;
    cin>>t;
    while (t --> 0){        
        cin >> n;
        string s("");
        for(long p = 0; p < n / 2; p++){
            s += '1';
        }
        if(n & 1){
            s[0] = '7';
        }
        cout << s <<endl;
    }
    
    getch();
    return 0;
}
