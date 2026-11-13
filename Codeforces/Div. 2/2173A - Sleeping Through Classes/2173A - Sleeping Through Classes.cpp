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
    int n, k;
    string s;
    if (!(cin >> n >> k)) return;
    cin >> s;

    int sleep_count = 0;
    int must_stay_awake_until = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            must_stay_awake_until = max(must_stay_awake_until, i + k);
        } else {
            if (i > must_stay_awake_until) {
                sleep_count++;
            }
        }
    }

    cout << sleep_count << endl;
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