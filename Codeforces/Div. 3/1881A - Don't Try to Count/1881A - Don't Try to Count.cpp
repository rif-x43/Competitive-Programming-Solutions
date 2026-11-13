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
    int n, m, counter = 0;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    bool flag = false;

    while (1) {
        if (x.contains(s)) {
            flag = true;
            break;
        }
        else {
            if (x.size() > s.size() * 10) {
                counter = -1;
                break;
            }
            x += x;
            counter++;
        }
    }

    cout << counter << endl;

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