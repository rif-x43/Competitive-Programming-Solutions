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
    return a / gcd(a, b) * b;
}


void solve() {
    int n, q;
    cin >> n >> q;
    
    string s;
    cin >> s;
    int B = std::count(all(s), 'B');

    vector < int > a(q), res(q, 0);

    for (int i = 0; i < q; i++) {
        cin >> a[i];
        
        if (!B) res[i] = a[i];
        else {
            while (a[i] > 0) {
                for (int j = 0; j < n; j++) {
                    if (a[i] == 0) break;
                    
                    if (s[j] == 'A') a[i]--;
                    else a[i] /= 2;
                    
                    res[i]++;
                }
            }
        }
    }
    
    for (auto x: res) cout << x << endl;
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