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
    int n, x; cin >> n >> x;
    vector <int> v(n);
    for (auto &x : v) cin >> x;
    sort(all(v));

    int gondola = 0;
    int j = n - 1, i = 0;
    while (i <= j){
        if(v[i] + v[j] <= x) i++;
        j--;
        gondola++;
    }

    cout << gondola;
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