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
    int n; cin >> n;
    string s; cin >> s;
    
    int sw_count = 0;
    if(s[0] != 'R') sw_count++;
    for (int i = 1; i < n; i++){
        if(s[i] == s[i-1]) sw_count++;
    }

    cout << sw_count << endl;
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