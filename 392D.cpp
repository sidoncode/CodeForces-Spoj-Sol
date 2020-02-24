#include<iostream>
#include<conio.h>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
    vector <int> v1;
    //vector<int> iterator ip;
    int t;
    int my_int;
    int min_num;
    cin>>t;
    for(int i=0;i<t;i++){
        for(int i=0;i<t;i++){
            cin>>my_int;
            v1.push_back(my_int);
            //ip =unique(v1.begin(),v1.end());
            unique(v1.begin(),v1.end());
            sort(v1.begin(),v1.end());
            min_num = v1[0];
            cout<<min_num<<endl;
            min_num  = 0;
        }

    }








    getch();
    return 0;    
}