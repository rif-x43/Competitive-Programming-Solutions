#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define Y "YES"
#define N "NO"

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n; cin >> n;
    vector <int> v(n);
    for(auto &x : v) cin >> x;

    int sum = 0, max_sum = -INF;
    for(int i = 0; i < n; i++){
        sum = max(v[i], sum + v[i]);
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}