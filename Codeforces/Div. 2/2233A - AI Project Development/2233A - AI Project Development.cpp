#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

#define Y "YES"
#define N "NO"

const int INF = 1e18; // Large value for "infinity" 
const int MAXN = 200005;
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    
    int maxim = 0, nikita_1 = 0, nikita_2 = 0;
    int total_1 = 0, total_2 = 0, hours = 0;
    
    while (true){
        hours++;
        maxim += x;
        
        nikita_1 += y;
        if (hours > z) nikita_2 += 10 * y;
        
        total_1 = maxim + nikita_1;
        total_2 = maxim + nikita_2;
        
        if(total_1 >= n) {
            cout << hours << endl;
            break;
        }
        
        if(total_2 >= n) {
            cout << hours << endl;
            break;
        }
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