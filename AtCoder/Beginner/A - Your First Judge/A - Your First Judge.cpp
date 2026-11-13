#include <bits/stdc++.h>
using namespace std;
int main()
{
    string given = "Hello,World!";
    string match;
    int count = 0;

    cin >> match;

    if (given == match)
    {
        cout << "AC";
    }
    else
    {
        cout << "WA";
    }
}