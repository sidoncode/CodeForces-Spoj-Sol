#include<iostream>
#include<conio.h>
#include<algorithm>
#include<vector>


using namespace std;

#define INF (int) 1e19

int main(){
    int n;
    int T;
    cin>>T;
    while (T-->0){
        cin>>n;
        vector <int> v1; 
        for(int i= 0;i<n;i++){
            cin>>v1[i];
        }
        //creating a 2nd vector
        vector <int> v2;
        int min_val = INF;
        for(int i=n-1;i>-1;i--){
            min_val = min(min_val,v1[i]);
            v2[i] = min_val;
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(v1[i] > v2[i+1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    getch();
    return 0;    
}