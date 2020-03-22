#include<stdio.h>
using namespace std; 

inline bool Square(int n) {
    int temp_val;
	for (int i = 1; i * i <= n; ++i){
		for (int j = 1; j * j <= n; ++j){
            temp_val = i*i + j*j;
			if (temp_val == n) { 
				return true; 
			} 
        }
    }
	return false; 
} 
int main(){ 
    int T,n;
    scanf("%d",T);
    while(T-->0){
        scanf("%d",&n);
        if (Square(n)){
            printf("Y\n");
        }
        else
            printf("N\n");
    }
} 
