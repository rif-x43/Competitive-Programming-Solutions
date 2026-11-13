#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n;
    cin >> n;
    vector < int > p(n);
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (i > 0) {
            if(abs(p[i - 1] - p[i]) == gcd(p[i], p[i - 1])) pairs++;
        }
    }
    
    cout << pairs << endl;
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