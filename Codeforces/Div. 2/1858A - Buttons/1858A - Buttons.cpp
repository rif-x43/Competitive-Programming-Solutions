#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}


void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = true;

    if (c & 1) {
        if (a >= b) flag = true;
        else flag = false;
    }
    else {
        if (a > b) flag = true;
        else flag = false;
    }

    cout << (flag ? "First" : "Second") << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}