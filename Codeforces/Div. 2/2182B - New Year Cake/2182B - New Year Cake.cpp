#include <bits/stdc++.h>
 // reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity"

void solve() {
    int a, b;
    cin >> a >> b;

    int possible_layers = 0;

    for (int way = 0; way <= 1; way++) {
        int white_choc = a;
        int dark_choc = b;

        if (way == 1) swap(white_choc, dark_choc);
        int layers = 0;
        int current_need = 1;

        while (true) {
            if (layers % 2 == 0) {
                if (white_choc >= current_need) white_choc -= current_need;
                else break;
            } else {
                if (dark_choc >= current_need) dark_choc -= current_need;
                else break;
            }

            layers++;
            current_need *= 2;
        }
        
        possible_layers = max(possible_layers, layers);
    }
    
    cout << possible_layers << endl;
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