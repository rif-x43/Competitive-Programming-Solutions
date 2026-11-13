#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define Y "YES"
#define N "NO"

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;


void solve() {
    int n; cin >> n;
    vector <pair<int, int>> v(n);
    for(auto &[x,y] : v) cin >> y >> x;
    sort(all(v));

    int movie_count = 0, last_end = 0;
    for(int i = 0; i < n; i++){
        if(last_end <= v[i].second){
            movie_count++;
            last_end = v[i].first;
        }
    }

    cout << movie_count;
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