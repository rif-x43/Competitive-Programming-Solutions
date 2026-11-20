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
const int MOD = 676767677;


void solve() {
    vector <int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(all(v));
    if(v[0]+1==v[1] && v[1]==v[2]-1){
        cout << Y << endl;
        return;
    }
    cout << N << endl;
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