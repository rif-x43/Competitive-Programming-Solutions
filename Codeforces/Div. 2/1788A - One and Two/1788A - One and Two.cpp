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
    vector < int > v(n), idx_of_2s;
    int freq_of2 = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 2) {
            idx_of_2s.push_back(i);
            freq_of2++;
        }
    }

    int target_idx = 0;
    
    if (freq_of2 & 1) target_idx = -1;
    else {
        target_idx = (freq_of2 == 0) ? 1 : idx_of_2s[(freq_of2 / 2) - 1] + 1;
    }
    
    cout << target_idx << endl;
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