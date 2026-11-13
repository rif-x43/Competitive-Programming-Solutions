#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define Y "YES"
#define N "NO"

const int INF = 1e17;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n, m; cin >> n >> m;
    vector <int> cust(m), res;
    multiset <int> tick;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        tick.insert(x);
    }
    for (auto &x : cust) cin >> x;

    for(int i = 0; i < m; i++){
        auto it = tick.upper_bound(cust[i]);
        if(it == tick.begin()) cout << -1 << endl;
        else {
            it--;
            cout << *it << endl;
            tick.erase(it);
        }
    }
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