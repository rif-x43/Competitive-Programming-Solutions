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
    int n, m, k; cin >> n >> m >> k;
    vector<int> applicants(n), apartments(m);
    vin(applicants);
    vin(apartments);

    sort(all(applicants));
    sort(all(apartments));

    int app_count = 0;
    int i = 0, j = 0;

    while(i < n && j < m){
        if(applicants[i] - k > apartments[j]) j++;
        else if(applicants[i] + k < apartments[j]) i++;
        else {
            app_count++;
            i++;
            j++;
        }
    }

    cout << app_count;
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