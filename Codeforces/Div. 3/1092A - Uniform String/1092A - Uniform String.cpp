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
    int n, k;
    cin >> n >> k;
    vector<char> c;
    
    int maxpmf = n / k;
    char ch = 'a' - 1;
    for (int i = 0; i < k; i++) {
        ch++;
        for (int j = 0; j < maxpmf; j++) {
            c.push_back(ch);
        }
    }
    
    while(c.size() < n) {
        c.push_back(ch);
    }
    
    for(auto x : c) cout << x;
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