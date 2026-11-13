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
    int n, x; cin >> n >> x;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(all(v));
    int i = 0, j = n - 1;
    bool flag = false;
    while(i < j){
        if(v[i].first + v[j].first == x) {
            flag = true;
            break;
        }
        else if(v[i].first + v[j].first < x) i++;
        else j--;
    }

    if(flag) cout << v[i].second << " " << v[j].second;
    else cout << "IMPOSSIBLE";
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