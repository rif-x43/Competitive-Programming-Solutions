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
    vector<int> teacher(n), student(n), diff(n);
    vin(teacher);
    vin(student);
    for(int i = 0; i < n; i++) diff[i] = teacher[i] - student[i];
    sort(all(diff));

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(diff[i] > 0){
            int target = i - (upper_bound(all(diff), -diff[i]) - diff.begin());
            ans+= target;
        }
    }

    cout << ans;
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