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
    int n, m;
    cin >> n >> m;

    vector<int> a(n), odd_a, even_a;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if ((i + 1) & 1) odd_a.push_back(a[i]);
        else even_a.push_back(a[i]);
    }
    
    int odd_x = 0, even_x = 0;
    for (int i = 0; i < m; i++) {
        int input;
        cin >> input;
        
        if (input & 1) odd_x++;
        else even_x++;
    }

    sort(rall(odd_a));
    sort(rall(even_a));

    int total_a = accumulate(all(a), 0LL);
    int marked = 0;

    int limit_odd = min(odd_x, (int)odd_a.size());
    for (int j = 0; j < limit_odd; j++) {
        if (j == 0 || odd_a[j] > 0) marked += odd_a[j];
        else break;
    }

    int limit_even = min(even_x, (int)even_a.size());
    for (int j = 0; j < limit_even; j++) {
        if (j == 0 || even_a[j] > 0) marked += even_a[j];
        else break;
    }

    cout << total_a - marked << endl;
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