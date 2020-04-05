#include <bits/stdc++.h> 
#include<conio.h>

using namespace std; 
/**
int divCount(int n){ 
	
	bool hash[n + 1]; 
	memset(hash, true, sizeof(hash)); 
	for (int p = 2; p * p < n; p++){
		if (hash[p] == true){ 
			for (int i = p * 2; i < n; i += p){
				hash[i] = false; 
            }
        }
    }

	
	int total = 1; 
	for (int p = 2; p <= n; p++) { 
		if (hash[p]) { 
    		int count = 0; 
			if (n % p == 0) { 
				while (n % p == 0) { 
					n = n / p; 
					count++; 
				} 
                cout<<n<<endl;
				total = total * (count + 1); 
			} 
		} 
	} 
	return total; 
} 

int main(){ 
	int n = 4; 
	cout << divCount(n); 
	getch();
    return 0; 

} 
**/

/**
int main(){
    int x;
    cin>>x;
    int cnt =0;
    for(int i=1;i<=x;i++){
        if(x % i == 0){
            cnt++;
            cout<<i<<endl;
        }
    }
    cout<<cnt;
    getch();
    return 0;

}**/

bool isPrime(int n){ 

	if (n <= 1) 
		return false; 

	
	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 

void printPrime(int n) 
{ 
	for (int i = 2; i <= n; i++) { 
		if (isPrime(i)) 
			cout << i << " "; 
	} 
} 

int main() 
{ 
	int n = 2; 
	printPrime(n); 
    getch();
    return 0;

} 
