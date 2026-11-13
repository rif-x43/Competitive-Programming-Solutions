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
    int n, x;
    cin >> n;
    vector < int > a(n);
    vector < int > b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    bool flag = false;
    
    for(x = 0; x < 256; x++) {
        int total_xor = 0;
        for(int i = 0; i < n; i++) {
            b[i] = a[i] ^ x;
            total_xor = total_xor ^ b[i];
        }
        
        if(!total_xor) {
            flag = true;
            break;
        }
    }
    cout << (flag ? x : -1) << endl;
    

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