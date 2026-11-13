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
    int n, x;
    cin >> n >> x;

    vector < pair < int, int >> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(all(v));

    bool isFound = false;
    int left_idx = 0;
    int right_idx = n - 1;

    while (left_idx < right_idx) {
        if (v[left_idx].first + v[right_idx].first == x) {
            isFound = true;
            break;
        }
        else {
            (v[left_idx].first + v[right_idx].first > x) ? right_idx-- : left_idx++;
        }
    }

    if (isFound) cout << v[left_idx].second + 1 << " " << v[right_idx].second + 1 << endl;
    else cout << -1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}