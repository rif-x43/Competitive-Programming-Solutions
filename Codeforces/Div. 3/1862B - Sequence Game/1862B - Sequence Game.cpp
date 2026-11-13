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
    vector<int> b(n);
    vector<int> a;
    
    for (int i = 0; i < n; i++) cin >> b[i];
    a.push_back(b[0]);

    for (int i = 1; i < n; i++) {
        if (b[i] < b[i-1])
            a.push_back(b[i]);
        a.push_back(b[i]);
    }

    cout << a.size() << endl;
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
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