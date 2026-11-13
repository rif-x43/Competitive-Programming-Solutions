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
    return a / gcd(a, b) * b;
}


void solve() {
    int n;
    cin >> n;
    string s = to_string(abs(n));

    reverse(all(s));
    
    vector < int > skip(4);
    
    int first = -1, second = -1;
    vector <string> cases = {"00", "52", "05", "57"};
    
    for (int k = 0; k < 4; k++) {
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == cases[k][0]) {
                first = i;
                break;
            }
        }
        
        int j;
        for (j = i + 1; j < s.size(); j++) {
            if (s[j] == cases[k][1]) {
                second = j;
                break;
            }
        }
        
        skip[k] = (i - 1) + (j - i);
    }
    
    cout << min({skip[0],skip[1],skip[2],skip[3]}) << endl;
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