#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    int year = 0;
    while (a <= b) {
        a += a + a;  // Instead of a *= 3
        b += b;      // Instead of b *= 2
        year++;
    }

    cout << year << endl;
    return 0;
}