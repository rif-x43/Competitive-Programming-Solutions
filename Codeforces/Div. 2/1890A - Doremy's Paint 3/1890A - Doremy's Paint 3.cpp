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
    int n, first_elem, second_elem, first_elem_count = 0, second_elem_count = 0;
    bool flag = true;
    cin >> n;
    vector < int > v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    set < int > s(all(v));
    if (s.size() > 2) flag = false;
    else {
        auto it = s.begin();
        first_elem = * it;

        if (s.size() == 2)
            second_elem = * std::next(it);
        else
            second_elem = first_elem;

        for (auto x: v) {
            if (x == first_elem) first_elem_count++;
            else if (x == second_elem) second_elem_count++;
        }

        if (s.size() == 1)
            flag = true;
        else if (abs(first_elem_count - second_elem_count) <= 1)
            flag = true;
        else
            flag = false;
    }

    cout << (flag ? "YES" : "NO") << endl;

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