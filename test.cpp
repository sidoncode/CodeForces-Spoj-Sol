#include <iostream>
#include <bits/stdc++.h> 

using namespace std; 

int  Square(int n) {
    int i,temp_val,j;
	for (i = 1; i * i <= n; ++i){
		for(j = 1; j * j <= n; ++j){
            temp_val = i*i + j*j;
			if (temp_val == n){ 
				return 1; 
			} 
        }
    }
	return false; 
} 
int main(){ 
    int T,n;
    cin>>T;
    while(T-->0){
        cin>>n;
        if(Square(n) == 1){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
} 
