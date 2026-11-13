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
    vector <int> a(n+1);
    for (int i = 1; i < n + 1; i++) cin >> a[i];
    
    vector <int> op_idx;
    int op_count = 0;
    
    for (int i = n; i >= 1; i--){
        int aj;
        if (op_count & 1) aj = -a[i];
        else aj = a[i];
        
        if (aj > 0) {
            op_idx.push_back(i);
            op_count++;
        }
    }
    
    cout << op_count << endl;
    for (int i = 0; i < op_idx.size(); i++) {
        cout << op_idx[i] << (i == op_idx.size() - 1 ? "" : " ");
    }
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