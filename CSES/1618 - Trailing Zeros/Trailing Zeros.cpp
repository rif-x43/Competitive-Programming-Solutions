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
const int MOD = 1e9 + 7;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n; cin >> n;
    int zero_count = 0;
    for(int i = 5; i <= n; i+= 5){
        int j = i;
        while(!(j%5)){
            zero_count++;
            j/=5;
        }
    }
    
    cout << zero_count;
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