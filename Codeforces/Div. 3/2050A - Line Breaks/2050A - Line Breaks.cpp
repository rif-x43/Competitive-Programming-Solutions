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
    int n, m;
    cin >> n >> m;
    
    int word_count = 0;
    int cur_size = 0;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(cur_size + s.size() <= m) {
            cur_size+= s.size();
            word_count++;
        } else cur_size = INF;
    }
    
    cout << word_count << endl;
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