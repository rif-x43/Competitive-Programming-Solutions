#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}


void solve() {
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    int A = m / a, B = m / b, C = m / c;
    int AB = m / lcm(a, b), AC = m / lcm(a, c), BC = m / lcm(b, c);
    int ABC = m / lcm(lcm(a, b), c);

    int onlyA = A - AB - AC + ABC;
    int onlyB = B - AB - BC + ABC;
    int onlyC = C - AC - BC + ABC;
    
    int onlyAB = AB - ABC;
    int onlyAC = AC - ABC;
    int onlyBC = BC - ABC;
    
    int onlyABC = ABC;
    
    int Alice = onlyA * 6 + onlyAB * 3 + onlyAC * 3 + onlyABC * 2;
    int Bob = onlyB * 6 + onlyAB * 3 + onlyBC * 3 + onlyABC * 2;
    int Carol = onlyC * 6 + onlyAC * 3 + onlyBC * 3 + onlyABC * 2;
    
    cout << Alice << " " << Bob << " " << Carol << endl;
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