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
    int total_points = 0;
    char cell;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> cell;
            if (cell == 'X') {
                int ring_value = min({i + 1, 10 - i, j + 1, 10 - j});
                total_points += ring_value;
            }
        }
    }
    cout << total_points << endl;
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