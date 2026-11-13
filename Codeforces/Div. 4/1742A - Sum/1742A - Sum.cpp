#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 


void solve() {
    vector < int > v(3);
    int max = 0;
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        
        if (v[i] > max) {
            max = v[i];
            idx = i;
        }
    }
    
    cout << ((accumulate(all(v), 0) == 2 * v[idx]) ? "YES" : "NO") << endl;

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