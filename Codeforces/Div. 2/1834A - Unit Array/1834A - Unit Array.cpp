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
    int n;
    cin >> n;
    int pos_count = 0, neg_count = 0;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (input > 0) pos_count++;
        else neg_count++;
    }
    int operations;
    if (neg_count % 2 == 0)
        operations = 0;
    else {
        operations = 1;
        neg_count--;
        pos_count++;
    }
        
    while (neg_count > pos_count) {
        operations += 2;
        pos_count+= 2;
        neg_count-= 2;
    }

    cout << operations << endl;
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