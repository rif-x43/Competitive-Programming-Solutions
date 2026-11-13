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
    vector <int> a, b;
    
    if (((n * (n + 1)) / 2) & 1) {
        cout << N;
        return;
    }
    
    int remaining = (n * (n + 1)) / 4;
    for(int i = n; i > 0; i--){
        if (remaining >= i) {
            remaining -= i;
            a.push_back(i);
        } else b.push_back(i);
    }
     cout << Y << endl;
     cout << a.size() << endl;
     for (auto x : a) cout << x << " ";
     cout << endl;
     cout << b.size() << endl;
     for (auto x : b) cout << x << " ";
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