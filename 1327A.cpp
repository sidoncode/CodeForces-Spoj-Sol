/**#include <bits/stdc++.h> 
#include<conio.h>

using namespace std; 

//#define ll long long int 


void findDistinctOddSum(int n, int  k) 
{ 
	
	if ((k * k) <= n && 
		(n + k) % 2 == 0){ 
		int val = 1; 
		int sum = 0; 
		for(int i = 1; i < k; i++){ 
			cout << val << " "; 
			sum += val; 
			val += 2; 
		} 
		//cout << n - sum << endl; 
        cout<<endl;
        cout<<"YES"<<endl;
	} 
    else
		cout << "NO"<<endl; 
} 

int main(){ 
    
    int n,m;
    int t;
    cin>>t;
    while (t -- )
    {
        /* code 


        cin>>n>>m;
        findDistinctOddSum(n, m); 

        
    }
    
    //	ll n = 100; 
    //	ll k = 4; 
	
    getch();

	return 0; 
    //return 0;
} 
**/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    long long int i, j, k;
    long long int n, m, t;

    cin>>t;

    while(t--){
        
        cin>>n>>k;
        if(n %2 == k % 2){
            if(k * k > n)
                cout<<"No"<<endl;
            else
                cout<<"YES";
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;

}