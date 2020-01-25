#include<bits/stdc++.h>

using namespace std;
int main(){
    int a;
    int b;
    int temp;
    int count=0;
    cin>>a>>b;
    if(a < b){
        temp =true;
    }
    else{
        temp = false;
    }
    while (a > 0 && b > 0){
        if(a ==1 && b==1){
            break;
        }
        if(temp == true){
            a = a+1;
            b=b-2;
            if(b<3){
                temp = false;
            }
        }
        else{
            b=b+1;
            a=a-2;
            if(a<3){
                temp = true;
            }
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}