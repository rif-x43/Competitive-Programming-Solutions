#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


//#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define Y "YES"
#define N "NO"

//const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n, W;
    cin >> n >> W;
    vector<int> dp(W+1, 0);
    vector<int> v(n+1, 0), w(n+1, 0);

    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> v[i];

    for(int i = 1; i <= n; i++){
        for(int c = W; c >= w[i]; c--){
            dp[c] = max(dp[c], dp[c-w[i]] + v[i]);
        }
    }

    cout << dp[W];
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