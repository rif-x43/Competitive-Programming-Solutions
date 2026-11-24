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
    int n, k; cin >> n >> k;
    int window_size = n - k + 1;

    vector<int> nums(n), run(n);
    vin(nums);
    
    run[n-1] = 1;
    for(int i = n - 2; i >= 0; i--){
        if(nums[i] == nums[i+1]) run[i] = run[i+1] + 1;
        else run[i] = 1;
    }

    int res = 0;
    for(int i = 0; i <= n - window_size; i++) if(run[i] >= window_size) res++;
    cout << res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}