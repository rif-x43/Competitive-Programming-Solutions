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
    cin >> n;
    string ans;
    switch(n) {
        case 1 :
            ans = "Walk";
            break;
        case 2 :
            ans = "No";
            break;
        case 3 :
            ans = "No";
            break;
        case 4 :
            ans = "No";
            break;
        case 5 :
            ans = "Yes";
            break;
        case 6 :
            ans = "Yes";
            break;
        case 7 :
            ans = "Backwards";
            break;
        case 8 :
            ans = "Seven";
            break;
    }
    
    cout << ans << endl;
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