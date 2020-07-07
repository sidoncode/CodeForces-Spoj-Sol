#include <iostream>
using namespace std;

int main(){

    int n , ans = 0 , count = 0;
    cin >> n;
    int a[n+9];

    for(int i = 1 ; i <= n ;i++){
        cin >> a[i];
    }
    
    for(int i = 1 ; i <= n ;i++){
        count = 0;
        int x = a[i];
        while(x != -1){
            x = a[x];
            count++;
        }
        ans = max(ans , count);
    }
    cout << ans+1;
    return 0;
}