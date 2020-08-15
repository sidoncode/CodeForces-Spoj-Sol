#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1000000007;

int main() 
{
	ll l,h;
	cin >> l >> h;
	
	ll k;
	cin >> k;
	
	int e;
	int o;
	
	if(l%2 == 0 && h%2 == 0)
	{
	    e = h/2 - l/2 + 1;
	    o = h/2 - l/2;
	}
	else if(l%2 == 0 && h%2 != 0)
	{
	    e = h/2 - l/2 + 1;
	    o = h/2 - l/2 + 1;
	}
	else if(l%2 != 0 && h%2 == 0)
	{
	    e = h/2 - l/2;
	    o = h/2 - l/2;
	}
	else
	{
	    e = h/2 - l/2;
	    o = h/2 - l/2 + 1;
	}
	
	//cout << e << " " << o << endl;
	
	ll dp[k+1][2];
	memset(dp,0,sizeof(dp));
	
	dp[1][0] = e;
	dp[1][1] = o;
	
	for(int i=2;i<=k;i++)
	{
	    ll a1 = e%mod;
	    ll a2 = o%mod;
	    
	    ll b1 = dp[i-1][0]%mod;
	    ll b2 = dp[i-1][1]%mod;
	    
	    ll c1 = (b1*a1)%mod;
	    c1    = (c1%mod + (b2*a2)%mod)%mod;
	    dp[i][0] = c1%mod;
	    
	    ll c2 = (b1*a2)%mod;
	    c2    = (c2%mod + (b2*a1)%mod)%mod;
	    dp[i][1] = c2%mod;
	    
	    //cout << dp[i][0] << "    " << dp[i][1] << endl;
	}
	
	cout << dp[k][0]%mod << endl;
	
	return 0;
}