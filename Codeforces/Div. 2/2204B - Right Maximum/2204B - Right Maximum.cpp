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
    cin >> n;
    vector < int > v(n);
    
    int op_count = 0;
    int current_max = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(current_max <= v[i]) {
            op_count++;
            current_max = v[i];
        }
    }
    
    cout << op_count << endl;
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