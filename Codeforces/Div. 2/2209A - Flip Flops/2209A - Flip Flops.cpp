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
    int n, c, k;
    cin >> n >> c >> k;
    vector <int> v(n);
    for(auto &x : v) cin >> x;
    
    sort(all(v));
    
    int max_possible_power = c;
    for (int i = 0; i < n; i++) {
        if (max_possible_power < v[i]) break;
        else {
            int throwable_flipflops = min(max_possible_power - v[i], k);
            k -= throwable_flipflops;
            max_possible_power += v[i] + throwable_flipflops;
        }
    }
    
    cout << max_possible_power << endl;
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