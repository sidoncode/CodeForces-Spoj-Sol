#include<iostream>
//#include<conio.h>

using namespace std;

int main(){
    int s1;
    int s2;
    int s3;
    int n;
    int count = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1>>s2>>s3;
        if(s1+s2+s3 >= 2){
            count ++;
        }
    }
    cout<<count;
  /**  getch();
    return 0; **/
}