#include<iostream>

using namespace std;

int main(){
    int count =0;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    count =d;
    if(k==1 || l==1 || m==1 || n==1 ){
        cout<<d<<endl;
    }
    else{
        for(int i=1;i<=d;i++){
            if((i%k !=0) && (i%l !=0) && (i%m !=0) && (i%n !=0)){
                count--;
            }
        }
        cout<<count<<endl;
    }
}