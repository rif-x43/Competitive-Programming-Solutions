#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

#define Y "YES"
#define N "NO"

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}


void solve() {
    int n;
    cin >> n;
    vector < int > a;

    if (n < 4) {
        if (n == 3) cout << 1 << " " << 3 << " " << 2 << endl;
        else if (n == 2) cout << 1 << " " << 2 << endl;
        else cout << 1 << endl;
    } else {
        a.push_back((n + 1) / 2);
        for (int i = n - 1; i > 0; i--) {
            if (i == (n + 1) / 2) continue;
            a.push_back(i);
        }

        for (auto x: a) cout << x << " ";
        cout << n << endl;
    }
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