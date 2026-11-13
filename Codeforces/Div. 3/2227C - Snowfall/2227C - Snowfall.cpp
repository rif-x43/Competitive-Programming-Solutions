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
    vector < int > two, three, six, normal;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 6 == 0) six.push_back(x);
        else if (x % 3 == 0) three.push_back(x);
        else if (x % 2 == 0) two.push_back(x);
        else normal.push_back(x);
    }

    for (auto x: two) six.push_back(x);
    for (auto x: normal) six.push_back(x);
    for (auto x: three) six.push_back(x);
    
    for (auto x: six) cout << x << " ";
    cout << endl;
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