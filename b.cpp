#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin >> n >> m;
	
	vector <int> v1;
	vector <int> v2;
	
	v1.push_back(1);
	v1.push_back(n);
	
	v2.push_back(1);
	v2.push_back(m);
	
	int t1 = n;
	for(int i=2;i*i <= t1;i++)
	{
	    if(t1%i == 0)
	    {
	        v1.push_back(t1/i);
	        t1 = t1/i;
	        i = 1;
	    }
	}
	
	int t2 = m;
	for(int i=2;i*i <= t2;i++)
	{
	    if(t2%i == 0)
	    {
	        v2.push_back(t2/i);
	        t2 = t2/i;
	        i = 1;
	    }
	}
	
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	 
	
	bool ref = false;
	int s1 = -1;
	int s2 = -1;

    int size1 = v1.size();
    int size2 = v2.size();
	
	for(int i=1;i<v1.size();i++)
	{
	    for(int j=1;j<v2.size();j++)
	    {
	        if(v1[i] == v2[j])
	        {
	            s1 = i;
	            s2 = j;
	            ref = true;
	        }     
	    }
	}
	  
	if(ref == true){

	    cout << ((size1-1)-s1) + ((size2-1)-s2) << endl;
	}

	else
	{
	    if(n != 1 && m != 1){
	        cout << size1 + size2 - 2 << endl;

        }
	    
	    
	}
	
	return 0;
}