#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}


void solve() {
    int n;
    cin >> n;
    string up, down;
    cin >> up >> down;

    int res = 0;

    for (int i = 0; i < n; i++) {
        int vertical = (up[i] != down[i]) ? 1 : 0;
        int horizontal = INF;
        
        if (i + 1 < n)
            horizontal = ((up[i] != up[i+1]) ? 1 : 0) + ((down[i] != down[i+1]) ? 1 : 0);

        if (horizontal < vertical) {
            res += horizontal;
            i++;
        } else {
            res += vertical;
        }
    }

    cout << res << endl;
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