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
    int n, k, pk;
    cin >> n >> k;
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    cin >> pk;
    
    int l_changes = 0, r_changes = 0;
    for (int i = 0; i < pk - 1; i++)
        if(a[i] != a[i + 1]) l_changes++;
    for (int i = pk - 1; i < n - 1; i++)
        if(a[i] != a[i + 1]) r_changes++;
        
    int output = (max(l_changes, r_changes) & 1) ? max(l_changes, r_changes) + 1 : max(l_changes, r_changes);
    cout << output << endl;
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