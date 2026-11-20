#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vin(v) for(auto &x : v) cin >> x
#define vout(v) for(auto x : v) cout << x << " "

#define Y "YES"
#define N "NO"

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n, k; cin >> n >> k;
    vector <int> a(n), b(n);

    int odd_a = 0, odd_b = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] & 1) odd_a++;
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] & 1) odd_b++;
    }

    int even_a = n - odd_a, even_b = n - odd_b;

    if(odd_a == odd_b) {
        cout << Y << endl;
    } else if (odd_a > odd_b){
        if(k & 1) cout << N << endl;
        else cout << Y << endl;
    } else {
        if(k & 1) cout << Y << endl;
        else cout << N << endl;
    }

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