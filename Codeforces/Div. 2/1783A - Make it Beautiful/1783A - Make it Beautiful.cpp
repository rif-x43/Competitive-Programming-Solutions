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
    vector < int > v(n);
    for (auto &x : v) cin >> x;
    sort(rall(v));
    
    bool is_equal = equal(v.begin() + 1, v.end(), v.begin());
    if (!is_equal){
        if(v[0] == v[1]) swap(v[1], v[n - 1]);
        cout << "YES" << endl;
        for (auto x : v) cout << x << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
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