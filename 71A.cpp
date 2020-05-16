#include<bits/stdc++.h>
//#include<conio.h>


using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    
    while (n--)
    {
        cin >> s;
        int x = s.length();
        if (x > 10)
        {
            cout << s[0] << x - 2 << s[x - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}