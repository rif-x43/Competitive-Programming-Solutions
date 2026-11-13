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
const int MOD = 676767677;

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int row, column; cin >> row >> column;
    int mx_row, mx_column;
    int num;
    if(row >= column) {
        if (row & 1) {
            mx_row = 1;
            mx_column = row;
        }
        else {
            mx_row = row;
            mx_column = 1;
        }
        
        num = row * row;
    } else {
        if (column & 1) {
            mx_row = 1;
            mx_column = column;
        }
        else {
            mx_row = column;
            mx_column = 1;
        }
        
        num = column * column;
    }
    num = num - abs(row - mx_row) - abs(column - mx_column);
    cout << num << endl;
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