#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

#define Y "YES"
#define N "NO"

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n; cin >> n;
    vector <int> a(n);

    int minus_one = 0, plus_one = 0;
    for (auto &x : a) {
        cin >> x;
        if (x > 0) plus_one++;
        else minus_one++;
    }

    if (n & 1) cout << N << endl;
    else {
        int target = n / 2;
        if (abs(target - plus_one) % 2 == 0) cout << Y << endl;
        else cout << N << endl;
    }
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