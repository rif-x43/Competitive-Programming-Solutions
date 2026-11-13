#include <bits/stdc++.h>
// reusRIFX--
using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'

void solve(){
    int n; cin >> n;
    int a, b, c, sol = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if((a+b+c) >= 2) sol++;
    }

    cout << sol << endl;
}

int32_t main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
