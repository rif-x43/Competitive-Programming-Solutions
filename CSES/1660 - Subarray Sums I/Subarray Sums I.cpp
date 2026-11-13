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
    int n, x; cin >> n >> x;
    vector <int> prefix(n + 1);
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        prefix[i] = prefix[i - 1] + a;
    }

    int i = 0, j = 1;
    int counter = 0;
    while(j <= n){
        if(prefix[j] - prefix[i] == x){
            counter++;
            j++;
        } else if(prefix[j] - prefix[i] < x) j++;
        else i++;
    }

    cout << counter;
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