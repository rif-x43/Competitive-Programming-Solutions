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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    vector < int > v(13, 0);
    stack < int > st;

    v[a] = 1;
    v[b] = 1;
    v[c] = 2;
    v[d] = 2;
    
    for (int i = 1; i < 13; i++) {
        if (v[i]) {
            if (!st.empty() && st.top() == v[i])
                st.pop();
            else
                st.push(v[i]);
        }
    }
    
    cout << ((st.empty()) ? "NO" : "YES") << endl;
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