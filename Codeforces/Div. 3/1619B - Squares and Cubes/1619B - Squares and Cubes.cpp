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

int kthRoot(int n, int k) {

    int x = powl((long double)n, 1.0L / k);

    auto check = [&](int mid) {
        __int128 cur = 1;

        for (int i = 0; i < k; i++) {
            cur *= mid;
            if (cur > n) return false;
        }

        return true;
    };

    while (check(x + 1)) x++;
    while (!check(x)) x--;

    return x;
}

void solve() {
    int n; cin >> n;
    int res = kthRoot(n, 2) + kthRoot(n, 3) - kthRoot(n, 6);
    
    cout << res << endl;
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