#include<bits/stdc++.h>

#include<conio.h>

using namespace std;


int main(){
    
    int n;

    cin>>n;

    string s;
    cin>>s;

    int r=0;
    int g=0;
    int b=0;

    for(int i=1;i<n;i++){

        if(s[i-1]==s[i]){

            if(s[i] =='R'){
                ++r;
            }
        }
        
        else if(s[i]=='B'){
            ++b;        
        }

        else if (s[i] == 'G')
        {
            /* code */
            ++g;
        }
        
    }

    cout<<r+g+b;

    getch();
    return 0;
}