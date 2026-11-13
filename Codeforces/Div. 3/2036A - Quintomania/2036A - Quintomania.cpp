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
    vector <int> a(n);
    
    bool isPossible = true;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        
        if(i > 0) {
            if (abs(a[i] - a[i - 1]) != 5 and abs(a[i] - a[i - 1]) != 7) isPossible = false;
        }
    }
    
    cout << (isPossible ? Y : N) << endl;
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