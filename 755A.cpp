#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int is_prime(int number){
    int i;

    for(int i=2;i<number;i++){
        if(number %i ==0){
            return 1;

        }

    }
    return 0;
}


int main(){

    int n;

    cin>>n;

    for(int i=0;i<1001;i++){
        if(is_prime((n*i) + 1)){
            cout<<i<<endl;
            break;
        }
    }

    getch();
    return 0;
}