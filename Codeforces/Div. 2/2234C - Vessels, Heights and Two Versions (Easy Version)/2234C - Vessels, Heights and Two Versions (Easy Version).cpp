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
    vector < int > h(n), ans(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i];

    for (int i = 0; i < n; ++i) {
        vector < int > limit_cw(n, 0);
        vector < int > limit_ccw(n, 0);

        int cur_max = h[i];
        for (int j = 1; j < n; j++) {
            int idx = (i + j) % n;
            limit_cw[idx] = cur_max;
            cur_max = max(cur_max, h[idx]);
        }

        cur_max = h[(i - 1 + n) % n];
        for (int j = n - 1; j >= 1; --j) {
            int idx = (i + j) % n;
            limit_ccw[idx] = cur_max;
            cur_max = max(cur_max, h[(idx - 1 + n) % n]);
        }

        int total_volume = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            total_volume += min(limit_cw[j], limit_ccw[j]);
        }
        ans[i] = total_volume;
    }

    for (int i = 0; i < n - 1; ++i) {
        cout << ans[i] << " ";
    }
    cout << ans[n - 1] << endl;

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