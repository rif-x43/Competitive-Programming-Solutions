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
    if(n & 1){
        cout << 1 << " ";
        for(int i = 3; i <= n; i+=2){
            cout << i << " ";
            cout << i - 1 << " ";
        }
    } else {
        for(int i = 2; i <= n; i+=2){
            cout << i << " ";
            cout << i - 1 << " ";
        }
    }

    cout << endl;
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