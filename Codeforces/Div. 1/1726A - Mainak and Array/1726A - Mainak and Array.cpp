#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

#define Y "YES"
#define N "NO"

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n;
    cin >> n;
    vector < int > a(n), prefix(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) prefix[i] = a[i - 1] - a[i];
    }
    
    int maxpref = *(max_element(prefix.begin(), prefix.end()));
    int max_one = (n > 1) ? *(max_element(a.begin() + 1, a.end())) - a[0] : 0;
    int max_two = (n > 1) ? a[n - 1] - *(min_element(a.begin(), a.end() - 1)) : 0;
    
    cout << max({maxpref, max_one, max_two}) << endl;
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