#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}


void solve() {
    string s;
    cin >> s;

    int streak = 1, max_streak = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) streak++;
        else streak = 1;
        
        max_streak = max(max_streak, streak);
        if (max_streak >= 7) break;
    }

    cout << (max_streak >= 7 ? "YES" : "NO") << endl;
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