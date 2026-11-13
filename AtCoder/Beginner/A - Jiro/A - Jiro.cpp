#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ab, ac, bc;
    cin >> ab >> ac >> bc;

    if (ab == '<')
    {
        if (ac == '<')
        {
            if (bc == '<')
                cout << 'B';
            else
                cout << 'C';
        }
        else
            cout << 'A';
    }
    else
    {
        if (ac == '<')
            cout << 'A';
        else if (bc == '<')
            cout << 'C';
        else
            cout << 'B';
    }
    cout << '\n';
    return 0;
}