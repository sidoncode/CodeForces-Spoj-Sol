#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int A[1000];
    int n;
    
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int m;
    cin>>m;
    int x = A[n%m];
    //int length = sizeof(A)/sizeof(A[0]);

    if(x %2 ==0){
        for (int i = 0; i < n;i++) {   
            if(A[i]%2 == 0){
                printf("%d\n", A[i]);
            }
        }  
    }
    else{
        for (int i = 0; i < m;i++) {   
            if(A[i]%2 != 0){
                printf("%d\n", A[i]);
            }
        }  
        
    }getch();
    
    return 0;
}