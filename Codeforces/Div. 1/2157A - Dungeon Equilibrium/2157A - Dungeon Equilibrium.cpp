#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n;
    cin >> n;
    vector <int> v(n + 1,0);
    for (int i = 0; i <  n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    
    int rmv_count = 0;
    for (int i = 0; i <= n; i++) {
        if(v[i] > i) rmv_count += v[i] - i;
        else if (v[i] < i) rmv_count += v[i];
    }
    
    cout << rmv_count << endl;
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