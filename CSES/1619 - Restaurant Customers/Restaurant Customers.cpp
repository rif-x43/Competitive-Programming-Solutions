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
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    sort(all(a)); sort(all(b));

    int i = 0, j = 0;
    int current = 0, mx = 0;

    while(i < n){
        if(a[i] < b[j]) {
            current++;
            mx = max(mx, current);
            i++;
        } else {
            current--;
            j++;
        }
    }

    cout << mx;
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