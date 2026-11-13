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
    int n, q;
    cin >> n >> q;
    
    vector < int > a(n + 1), prefixOdd(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefixOdd[i] = prefixOdd[i - 1] + (a[i] & 1);
    }


    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        
        int oddinRange = prefixOdd[r] - prefixOdd[l - 1];
        int totalOdd = prefixOdd[n] - oddinRange + (k & 1 ? (r - l + 1) : 0);
        
        cout << (totalOdd & 1 ? "YES" : "NO") << endl;
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