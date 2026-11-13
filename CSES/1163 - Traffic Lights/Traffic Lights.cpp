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
    int x, n; cin >> x >> n;
    set <int> lights;
    lights.insert(0);
    lights.insert(x);
    multiset <int> gaps;
    gaps.insert(x);

    for(int i = 0; i < n; i++){
        int new_light; cin >> new_light;
        auto it = lights.upper_bound(new_light);

        int right = *it;
        int left = *(--it);

        gaps.erase(gaps.find(right - left));
        gaps.insert(right - new_light);
        gaps.insert(new_light - left);

        lights.insert(new_light);

        cout << *(--gaps.end()) << " ";
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