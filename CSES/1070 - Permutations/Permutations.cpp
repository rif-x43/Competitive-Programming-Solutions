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

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1;
        return;
    }
    
    if (n < 4) {
        cout << "NO SOLUTION";
        return;
    }
    
    for (int i = 2; i <= n; i+= 2) cout << i << " ";
    for (int i = 1; i <= n; i+= 2) cout << i << " ";
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