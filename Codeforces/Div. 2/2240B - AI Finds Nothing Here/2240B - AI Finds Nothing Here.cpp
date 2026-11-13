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

int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;

    int total_cell = n * m;
    int unreachable_cell = (n - r + 1) * (m - c + 1);
    
    int ans = power(2, (total_cell - unreachable_cell));
    
    cout << ans << endl;
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