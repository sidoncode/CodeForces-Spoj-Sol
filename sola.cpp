#include <bits/stdc++.h> 
#include<conio.h>

using namespace std; 


int findMinDiff(int a[], int n){

	int diff = INT_MAX;

	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (abs(a[i] - a[j]) < diff){
				diff = abs(a[i] - a[j]); 
			}
		}
	}

	return diff; 
}


int main() { 
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<findMinDiff(a,n)<<endl;

	getch();
	return 0; 
	
} 
