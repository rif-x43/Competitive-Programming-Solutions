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
    int n;
    string s;
    cin >> n;
    cin >> s;
    
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }
    }

    int max_streak = 0;
    int total_counter = 0;

    for (auto x: v) {
        if (x) {
            total_counter++;
            max_streak++;
            if (max_streak > 2) break;
        }
        else
            max_streak = 0;
    }

    cout << ((max_streak > 2) ? 2 : total_counter) << endl;

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