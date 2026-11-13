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
    int n;
    string s;
    cin >> n;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    bool flag = true;

    if (n < 26) {
        cout << "NO" << endl;
        return;
    }
    
    map < char, int > mp;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    char c = 'a';

    for (int i = 0; i < 26; i++) {
        if (!mp[c]){
            flag = false;
            break;
        }
        c++;
    }
    
    cout << ((flag) ? "YES" : "NO") << endl;
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