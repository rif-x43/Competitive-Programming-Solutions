#include <bits/stdc++.h>
 // reusRIFX
using namespace std;

#define int long long
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 


const int INF = 1e18; // Large value for "infinity" 


void solve() {
    int n;
    cin >> n;

    cout << ((n > 2) ? (n - 1) / 2 : 0) << endl;
}

int32_t main() {
    fast_io;

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}