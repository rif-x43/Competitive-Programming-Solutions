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
    string s;
    
    cin >> n >> s;
    
    int count_A = 0;
    for(auto x : s) if (x == 'A') count_A++;
    
    if (count_A > n / 2) cout << "Anton" << endl;
    else if ((count_A < (n / 2) + 1 and n & 1) or (count_A < (n / 2) and !(n & 1))) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}