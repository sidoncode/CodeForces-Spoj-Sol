#include <iostream>
#include<algorithm>
#include<stdio.h>


using namespace std;


void quicksort(int a[],int first, int last){
    int i;
    int j;
    int pivot;
    int temp;
    if(first < last){
        i = a[0];
        j = a[last];
        pivot = a[0];

        while(i<j){
            
            while(a[i] <= a[pivot]){
                i++;
            }

            while (a[j] > a[pivot]){
                j--;        
            }
            
            
            if(i > j){    
                temp= a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }


}
int f2(int x){
    int x;
    
}


int f1(int n)  
{  


    int t=0;
    while (n % 2 == 0)  
    {  
        t++;  
        n = n/2;  
    }  
  
    
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        
        while (n % i == 0)  
        {  
            t++;
            n = n/i;  
        }  
    }  
  
    
    if (n > 2)  
        t++;
    
    return t;
}  
  

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int x1,k1;
	    
        cin>>x1>>k1;
	    
        int ans=f1(x);
	    
        if(ans>=k1){
	        cout<<'1'<<\n;
        }
	    
        else{
	        cout<<'0'<<\n;
        }
	    
	}

}