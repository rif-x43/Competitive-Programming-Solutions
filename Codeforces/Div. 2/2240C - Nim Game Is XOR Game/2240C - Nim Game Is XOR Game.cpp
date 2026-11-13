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
const int MOD = 998244353;

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int xr = 0, sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xr ^= a[i];
        sum += a[i];
    }
    
    if (sum == 0) {
        cout << 0 << endl;
        return;
    }
    
    int w_moves = 0;
    for (int i = 0; i < n; i++) {
        int b = xr ^ a[i];
        if (b < a[i]) {
            int b_sum = sum - a[i] + b;
            if (b_sum > 0) w_moves++;
        }
    }
    
    if (xr == 0) w_moves++;
    
    cout << w_moves % MOD << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}