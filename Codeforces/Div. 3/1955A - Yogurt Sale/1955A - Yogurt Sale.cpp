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
    int n, a, b;
    cin >> n >> a >> b;
    bool buyPromo = (2 * a > b) ? true : false;
    
    int minCost;
    if (buyPromo) minCost = ((n / 2) * b) + (n % 2) * a;
    else minCost = n * a;
    
    cout << minCost << endl;
    
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