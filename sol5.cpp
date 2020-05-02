#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#include<conio.h>

#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[t];
	
	
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	if(t==1)
        cout<<"YES"<<endl;

    else{
        int count=0;
        int flag=0;
        int i;
        for(i=0;i<t-1;i++)
        {
            if(arr[i]<arr[i+1])count++;
            else break;
        //	cout<<count;
            
        }
        int j;
        for(j=i;j<t-1;j++){
            if(arr[j]==arr[j+1])count++;
            else break;    
        }
        for(i=j;i<t-1;i++){
            if(arr[i]>arr[i+1])count++;
            else break;
            
        }
        if(count==t-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    getch();
    return 0;
}
