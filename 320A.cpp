#include<bits/stdc++.h>


using namespace std;

int main(){
    string str;
    cin>>str;
    int l = str.length();
    

    
    int flag = 1;

    for (int i=0; i<l; i++)
    {
        if (str[i] == '1' && str[i+1] == '4' && str[i+2] == '4')
            i += 2;
        else if (str[i] == '1' && str[i+1] == '4')
            ++i;
        else if (str[i] == '1')
            continue;
        
        else{
            flag = 0;
            cout<<"NO"<<endl;
            break;
        }
    }
    
    if(flag == 1){
        cout<<"YES"<<endl;
    }


}