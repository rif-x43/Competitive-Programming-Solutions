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
    vector < int > v(n+1);
    
    int oddcount = 0, oddindex = -1, evencount = 0, evenindex = -1;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if(v[i] & 1) {
            oddcount++;
            oddindex = i;
        } else {
            evencount++;
            evenindex = i;
        }
    }
    
    cout << ((oddcount > evencount) ? evenindex : oddindex) << endl;
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