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
    string s;
    cin >> s;
    
    int suf = 0, pref = 0;
    for (auto x : s) if (x == '1' or x == '3') suf++;
    int res = pref + suf;
    
    for (auto x : s) {
        if (x == '2') pref++;
        if (x == '1' or x == '3') suf--;
        
        res = max(res, suf + pref);
    }
    
    cout << s.size() - res << endl;
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