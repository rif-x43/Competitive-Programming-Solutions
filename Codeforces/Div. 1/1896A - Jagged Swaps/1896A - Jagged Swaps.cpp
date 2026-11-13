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
    int lowest_elem = INF;
    vector < int > v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (lowest_elem > v[i]) lowest_elem = v[i];
    }

    bool flag = true;
    if(lowest_elem != v[0]) flag = false;
    for (int i = 1; i < n - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]){
            flag == true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
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