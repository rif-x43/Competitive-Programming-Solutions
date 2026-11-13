#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

#define Y "YES"
#define N "NO"

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n;
    cin >> n;
    int minBus = 0, maxBus = 0;
    
    if (n%6 == 0) minBus = n / 6;
    else if (n%6 == 2 or n%6 == 4) minBus = (n / 6) + 1;
    
    maxBus = n / 4;
    
    if(n & 1 or n < 4) cout << -1 << endl;
    else cout << minBus << " " << maxBus << endl;
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