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
    int n; cin >> n;
    int total_pairs = 0;
    for (int b = 1; b <= n; b++) total_pairs += (n / b) * (n / b);
    
    cout << total_pairs << endl;
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