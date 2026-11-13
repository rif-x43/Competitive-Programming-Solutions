#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 


void solve() {
    string s, output;
    cin >> s;
    output = s;
    int count_lower = count_if(s.begin(), s.end(), [](unsigned char c) { return islower(c); });
    int count_upper = count_if(s.begin(), s.end(), [](unsigned char c) { return isupper(c); });
        
    if (count_lower >= count_upper)
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    else
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); });
        
    cout << s << endl;
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