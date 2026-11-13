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
    int n; cin >> n;
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x){
            if(x-1) two++;
            else one++;
        } else zero++;
    }
    
    int res = zero + min(one, two);
    int newone = one - min(one, two);
    int newtwo = two - min(one, two);
    
    cout << res + (newone / 3) + (newtwo / 3) << endl;
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