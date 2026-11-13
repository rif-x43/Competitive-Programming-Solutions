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

    vector < int > a(n), b(n);
    for (auto & x: a) cin >> x;
    for (auto & x: b) cin >> x;

    int op_count = 0;
    int target_m;
    for (int i = 0; i < n; i++) {
        if (i == 0) target_m = gcd(a[i], a[i + 1]);
        else if (i == n - 1) target_m = gcd(a[i], a[i - 1]);
        else target_m = lcm(gcd(a[i], a[i - 1]), gcd(a[i], a[i + 1]));
        
        if (target_m < a[i]) op_count++;
    }

    cout << op_count << endl;
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