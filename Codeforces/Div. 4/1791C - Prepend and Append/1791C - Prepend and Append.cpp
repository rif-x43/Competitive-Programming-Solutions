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
    cin >> n;
    string s;
    cin >> s;
    
    int left_idx = 0;
    int right_idx = n - 1;
    
    int init_size = (n & 1) ? 1 : 0;
    
    for(int i = 0; left_idx < right_idx; i++){
        if(s[left_idx] == s[right_idx]) {
            init_size = right_idx - left_idx + 1;
            break;
        }
        left_idx++;
        right_idx--;
    }
    
    cout << init_size << endl;
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