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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    int possible_moves = 0;

    vector <int> possible_xs = {a, a, -a, -a, b, b, -b, -b};
    vector <int> possible_ys = {b, -b, b, -b, a, -a, a, -a};
    
    set < pair < int, int >> king_checks, queen_attacks;

    for (int i = 0; i < 8; i++) {
        king_checks.insert({
            xk + possible_xs[i],
            yk + possible_ys[i]
        });
        queen_attacks.insert({
            xq + possible_xs[i],
            yq + possible_ys[i]
        });
    }

    for (auto queen_attack: queen_attacks)
        if (king_checks.count(queen_attack)) possible_moves++;

    cout << possible_moves << endl;

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