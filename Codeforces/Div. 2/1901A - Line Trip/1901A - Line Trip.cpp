#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 
#define all(s) s.begin(), s.end()

const int INF = 1e18; // Large value for "infinity" 


void solve() {
    int n, x;
    cin >> n >> x;

    int gas_station_gap = 0, first_gap = 0, last_gap = 0;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0) {
            int temp_gas_station_gap = v[i] - v[i - 1];
            gas_station_gap = max(gas_station_gap, temp_gas_station_gap);
        }
    }

    first_gap = v[0];
    last_gap = (x - v[n - 1]) * 2;

    cout << max({
        gas_station_gap,
        first_gap,
        last_gap
    }) << endl;
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