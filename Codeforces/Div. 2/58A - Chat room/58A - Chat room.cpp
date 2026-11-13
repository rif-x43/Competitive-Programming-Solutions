#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string h = "hello";
    int a = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(h[a] == s[i])
            a++;
    }

    cout << ((a == 5) ? "YES" : "NO");

    return 0;
}