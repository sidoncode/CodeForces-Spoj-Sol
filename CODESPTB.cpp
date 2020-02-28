#include<bits/stdc++.h>
#include<conio.h>

using namespace std; 

int main(){
    int t;
    int j;
    int n;
    int temp;

    cin>>t;

    while (t --){
        cin>>n;
        int a[n];
        int count = 0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++){
            j = i;
            while ( j>0 && a[j-1]> a[j]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                j--;
                count++;
            }
        }
        cout<<count;
        cout<<endl;
    }
    

    getch();
    return 0;
}