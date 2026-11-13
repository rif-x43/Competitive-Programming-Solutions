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
    int n, k, x;
    cin >> n >> k >> x;

    int smallest_sum = 0, largest_sum = 0;
    smallest_sum = (k * (k + 1)) / 2;
    largest_sum = ((n * (n + 1)) / 2) - (((n-k) * (n -k + 1)) / 2);
    
    cout << ((x >= smallest_sum && x <= largest_sum) ? "YES" : "NO" )<< endl;

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