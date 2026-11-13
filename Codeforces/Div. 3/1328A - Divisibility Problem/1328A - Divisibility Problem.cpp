#include <bits/stdc++.h>
// reusRIFX
using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order

const int INF = 1e18; // Large value for "infinity"

void solve() {
    int a, b;
    cin >> a >> b;
    
    cout << ((a % b == 0) ? 0 : (b - a % b)) << endl;
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