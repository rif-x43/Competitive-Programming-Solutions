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
    vector < int > a(n);
    set < int > st;

    for (auto & x: a) cin >> x;

    st.insert(a[0]);
    int b = a[0];

    while (true) {
        if (b & 1) {
            b++;
            st.insert(b);
        } else if (!(b & 1)) {
            b /= 2;
            st.insert(b);
        }
        
        if (b == 1) break;
    }

    int min_op_count = INF;
    for (auto x: st) {
        int op_count = 0;
        bool inf_loop_trigger = false; 
        for (auto y: a) {
            int temp = y;
            while (true) {
                if (temp == x) {
                    inf_loop_trigger = false;
                    break;
                } else if (temp == 1) {
                    if(inf_loop_trigger) break;
                    inf_loop_trigger = true;
                }
                
                if (temp & 1) {
                    temp++;
                    op_count++;
                } else {
                    temp /= 2;
                    op_count++;
                }
            }
            if(inf_loop_trigger) break;
        }
        if(!inf_loop_trigger) min_op_count = min(min_op_count, op_count);
    }
    
    cout << min_op_count << endl;
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