#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;
    int n,m,r,l;
    bool flag;
    cin>>l>>r;
    for(i=l;i<=r;i++){
        k=i;
        int a[10] = {0};
        flag = true;
        while (k){
            m=k%10;
            a[m]++;
            k/=10;
            if(a[m] > 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<i;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}