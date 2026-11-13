#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n;
    cin >> n;
    
    vector < int > v(n);
    for (auto &x : v) cin >> x;
    
    for (int i = 0; i < n; i++) {
        int greater_count = 0, smaller_count = 0;
        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[i]) greater_count++;
            if (v[j] < v[i]) smaller_count++;
        }
        cout << max(greater_count, smaller_count) << ((i != n - 1) ? " " : "");
    }
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