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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    vector < char > freq(26, 0);
    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    int odd_count = 0, even_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] & 1) odd_count++;
        else even_count++;
    }
    
    cout << ((odd_count - 1 <= k) ? "YES" : "NO") << endl;
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