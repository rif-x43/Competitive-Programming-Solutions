#include <bits/stdc++.h>
// reusRIFX--
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector <int> d(n),v, v1;
    for(auto &x : d) cin >> x;

    sort(all(d));
    int dg1 = d[n - 1];
    int i = 0;
    while(i < n){
        if(dg1 % d[i] != 0) v.push_back(d[i]);
        if(i < n - 1){
            if(d[i] == d[i+1]){
                v.push_back(d[i]);
                i++;
            }
        }
        i++;
    }

    int dg2 = v[v.size() - 1];

    cout << dg1 << " " << dg2;
}

int32_t main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
