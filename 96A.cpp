#include<iostream>
#include<algorithm>
//#include<conio.h>

using namespace std;

int main(){
    string s1;
    cin>>s1;
    int i;
    int ones;
    int zeros;
    bool flag;
    for(i =0;i<s1.length();i++){
        ones = count(s1.begin()+i,s1.begin()+i+7,'1');
        zeros = count(s1.begin()+i,s1.begin()+i+7,'0');
        if(ones >= 7 || zeros >= 7){
            flag =true;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;   
    }
}