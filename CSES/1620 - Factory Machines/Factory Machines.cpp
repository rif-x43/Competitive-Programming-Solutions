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
    int n, x; cin >> n >> x;
    vector<int> machines(n);
    vin(machines);

    int low = 0, high = x*(*min_element(all(machines)));
    while(low <= high){
        int mid = low + (high - low) / 2;
        int ans = 0;
        for(auto z : machines) ans+= mid / z;
        if (ans >= x) high = mid - 1;
        else low = mid + 1;
    }

    cout << low;
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