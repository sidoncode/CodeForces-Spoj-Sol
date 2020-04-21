#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
    int t;

    cin>>t;
    
    int sum2;
    int n;
    int num;
    int sum;
    
    while (t--  > 0)
    {
        cin>>n;
        num=1;
        sum2 = 0;
        sum = n*(n+1)/2;
        while (num <= n)
        {
            sum2 +=num;
            num*=2;

        }

    
        cout<<sum-sum2*2<<endl;
    }


    getch();
    return 0;
}