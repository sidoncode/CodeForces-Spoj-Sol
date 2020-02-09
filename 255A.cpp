#include<bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int chest(0);
    int biseps(0);
    int back(0);
    for(int i=0;i<n;i++){
        if(i%3 == 0){
            chest +=a[i];
        }
        else if(i%3 == 1){
            biseps+=a[i];
        }
        else{
            back+=a[i];
        }
    }
    if(chest>bices && chest>back){
	    cout<<"chest";
	}else if(bices>chest && bices>back){
	    cout<<"biceps";
	}else{
	    cout<<"back";
	}
    return 0;
}