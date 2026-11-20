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
    int n; cin >> n;
    vector<int> books(n);
    map<int, int> freq;
    for(int j = 0; j < n; j++){
        cin >> books[j];
        freq[books[j]]++;
    }

    int vis_count = n;
    for(auto [book, f] : freq) if(f >= 3) vis_count-= (f-2);
    sort(rall(books));

    deque<int> d;
    int i = 0;
    while(i < n){
        if(i&1) d.push_front(books[i]);
        else d.push_back(books[i]);
        i++;
    }

    cout << vis_count << endl;
    vout(d);
    cout << endl;
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