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
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n), acopy, bcopy;

    for(int i = 0; i < n; i++) cin >> a[i];
    bool isGreater = true;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(a[i] < b[i]) isGreater = false;
    }

    int cost = 0;
    if(!isGreater) {
        sort(all(a));
        sort(all(b));
        cost += c;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cout << -1 << endl;
            return;
        }

        cost += a[i] - b[i];
    }

    cout << cost << endl;
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