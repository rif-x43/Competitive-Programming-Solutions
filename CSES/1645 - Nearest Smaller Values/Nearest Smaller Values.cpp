#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vin(v) for(auto &x : v) cin >> x
#define vout(v) for(auto x : v) cout << x << " "

#define Y "YES"
#define N "NO"

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        int number; cin >> number;
        v[i].first = number;
        int j = i - 1;
        while(j >= 0 && v[i].first <= v[j].first) j = v[j].second;
        v[i].second = j;
    }

    for(auto [number, res] : v) cout << res + 1 << " ";
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