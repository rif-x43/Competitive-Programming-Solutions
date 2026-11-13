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
    vector < char > grid(17);
    for (int i = 1; i < 17; i++) {
        cin >> grid[i];
    }

    int black_count, white_count;
    bool isPossible = false;
    for (int i = 1; i < 12; i++) {
        if (i % 4 == 0) continue;
        black_count = 0;
        white_count = 0;

        int indices[4] = {
            i,
            i + 1,
            i + 4,
            i + 5
        };

        for (int idx: indices) if(grid[idx] == '#') black_count++;
        
        isPossible = (black_count != 2) ? true : false;
        if (isPossible) break;
    }

    cout << (isPossible ? "YES" : "NO") << endl;

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