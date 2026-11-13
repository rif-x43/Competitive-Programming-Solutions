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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
    }

    else {
        if (k == 1) {
            cout << "NO" << endl;
        }
        else if (n == 1) {
            cout << "NO" << endl;
        }
        else if (k == 2 && n % 2 != 0) {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0) {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) cout << 2 << " ";
            cout << endl;
        }
        else {
            cout << "YES" << endl;
            cout << (n - 3) / 2 + 1 << endl;
            for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
            cout << 3 << " ";
            cout << endl;
        }
    }
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