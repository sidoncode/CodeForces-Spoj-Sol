#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, f, t, max_joy, joy;
    cin >> n >> k >> f >> t;

    if (t > k){
        max_joy = f - (t - k);
    }

    else{
        max_joy = f;
    }

    while (n --> 0){     
        cin >> f >> t;

        if (t > k){
            joy = f - (t - k);
        }

        else{
            joy = f;
        }

        if (joy > max_joy){
            max_joy = joy;
        }

    }
    cout << max_joy << endl;
   
   return 0;
}