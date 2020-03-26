#include <bits/stdc++.h> 
#include<conio.h>

using namespace std; 
/**
int divCount(int n) { 
	bool hash[n + 1]; 
	memset(hash, true, sizeof(hash)); 
	for (int p = 2; p * p < n; p++) 
		if (hash[p] == true) 
			for (int i = p * 2; i < n; i += p) 
				hash[i] = false; 
	int total = 1; 
	for (int p = 2; p <= n; p++) { 
		if (hash[p]) { 
			int count = 0; 
			if (n % p == 0) { 
				while (n % p == 0) { 
					n = n / p; 
					count++; 
				} 
				total = total * (count + 1); 
			} 
		} 
	} 
	return total; 
} 
int main(){ 
    int T;
    int t;
    cin>>t;
    int a[10];
    while(t-->0){
        cin>>T;
        while(T-->0){
            int n; 
            cin>>n;
            if(divCount(n) % 2 == 0)
                cout<<"yes";
            else if(divCount(n) % 2 != 0){
                for(int i=0;i<T;++i){
                    cin>>a[i];
                }
              for (int i=0;i<T;++i){
                  cout<<a[i]<<endl;
                }
            }
            else
                cout<<"sorry bro"<<endl;        
        }
    }

}

**/

int main(){
    string s;
    cin>>s;
    int x;
    x = s.length();
    cout<<"the s.length"<<x<<endl;
    int y;
    y = s.size();
    cout<<"the s.size value if"<<y<<endl;
    getch();
    return 0;
}