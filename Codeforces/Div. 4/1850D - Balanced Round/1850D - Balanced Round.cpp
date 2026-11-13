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
    int n, k;
    cin >> n >> k;

    vector < int > a(n);
    for (auto & x: a) cin >> x;
    sort(all(a));

    
    int maxConsecutive = 1, consecutiveCount = 1;
    for (int i = 1; i < n; i++) {
        if(abs(a[i] - a[i - 1]) <= k) consecutiveCount++;
        else consecutiveCount = 1;
        
        if(consecutiveCount > maxConsecutive) maxConsecutive = consecutiveCount;
    }
    
    cout << n - maxConsecutive << endl;
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