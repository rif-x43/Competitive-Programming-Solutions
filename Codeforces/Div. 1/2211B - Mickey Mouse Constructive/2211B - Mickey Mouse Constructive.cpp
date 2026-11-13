#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;
int spf[MAXN];

void buildSieve() {
    for (int i = 2; i < MAXN; i++) spf[i] = i;
    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j) spf[j] = i;
        }
    }
}

int getDivisorCount(int n) {
    if (n == 0) return 1;
    int total = 1;
    while (n > 1) {
        int p = spf[n];
        int count = 0;
        while (n % p == 0) {
            count++;
            n /= p;
        }
        total = (total * (count + 1)) % MOD;
    }
    return total;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}


void solve() {
    int x, y;
    cin >> x >> y;
    int total_elements = x + y;

    int f = (x == y) ? 1 : getDivisorCount(abs(x - y));
    if (x >= y) {
        cout << f << endl;
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
    } else {
        cout << f << endl;
        for (int i = 0; i < y; i++) cout << -1 << " ";
        for (int i = 0; i < x; i++) cout << 1 << " ";
    }
    
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    buildSieve();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}