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
    int a, b, c;
    cin >> a >> b >> c;
    
    vector < int > v(6);
    v[0] = a + b + c;
    v[1] = (a + b) * c;
    v[2] = a + (b * c);
    v[3] = (a * b) + c;
    v[4] = a * (b + c);
    v[5] = a * b * c;
    
    cout << *(max_element(v.begin(), v.end())) << endl;
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