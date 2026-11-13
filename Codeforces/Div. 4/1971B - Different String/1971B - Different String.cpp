#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 
#define all(s) s.begin(), s.end()

const int INF = 1e18; // Large value for "infinity" 


void solve() {
    string s, t;
    cin >> s;
    t = s;

    bool isSame = all_of(s.begin(), s.end(), [ & ](char c) {
        return c == s[0];
    });

    if (!isSame) {
        mt19937 g(chrono::steady_clock::now().time_since_epoch().count());
        while (t == s && s.length() > 1) {
            shuffle(t.begin(), t.end(), g);
        }
        cout << "YES" << endl << t << endl;
    }
    else
        cout << "NO" << endl;

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