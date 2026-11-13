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
    int n;
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sum_x+= x;
        sum_y+= y;
        sum_z+= z;
    }
    
    cout << (!(sum_x or sum_y or sum_z) ? "YES" : "NO") << endl;
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