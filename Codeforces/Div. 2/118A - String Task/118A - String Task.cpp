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

    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    vector < char > v;
    string vowels = "aeiouy";
    for (auto x : s) {
        if (vowels.find(x) == string::npos) {
            v.push_back('.');
            v.push_back(x);
        }
    }
    
    for (auto x : v) cout << x;
    cout << endl;
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