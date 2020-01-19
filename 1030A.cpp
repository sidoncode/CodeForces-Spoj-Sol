#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int element;
    vector <int> v1;
    int ones;
    int zeros;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        v1.push_back(element);
    }
    for(int i=0;i<n;i++){
       ones = count(v1.begin(),v1.end(),1);
    }
    if(ones)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
}