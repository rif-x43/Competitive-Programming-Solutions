#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}


void solve() {
    int n;
    cin >> n;

    vector < int > a(n), b, c;
    for (auto & x: a) cin >> x;

    int min_value = *(min_element(a.begin(), a.end()));

    for (auto x: a) {
        if (x == min_value) b.push_back(x);
        else c.push_back(x);
    }

    if (c.empty()) {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;
    for (auto x: b) cout << x << " ";
    cout << endl;
    for (auto x: c) cout << x << " ";
    cout << endl;
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