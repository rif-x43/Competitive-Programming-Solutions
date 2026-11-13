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
    int n;
    cin >> n;
    vector < int > a(n);
    for (auto & x: a) cin >> x;

    bool is_Possible = true;
    int index, value;
    for (int i = 0; i < n; i++){
        index = i + 1;
        value = a[i];
        
        while (index % 2 == 0) index /= 2;
        while (value % 2 == 0) value /= 2;
        
        if(index != value) is_Possible = false;
        if(!is_Possible) break;
    }
    
    cout << (is_Possible ? "YES" : "NO") << endl;
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