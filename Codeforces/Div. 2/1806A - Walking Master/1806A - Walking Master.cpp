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
    
    int del_height = d - b;
    int new_x = a + del_height;
    
    if((new_x >= c) && (del_height >= 0))
        cout << del_height + (new_x - c) << endl;
    else 
        cout << -1 << endl;
    
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