#include <bits/stdc++.h>
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
    return a / gcd(a, b) * b;
}

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    }

    return x == reversedHalf || x == reversedHalf / 10;
}

void solve() {
    int n;
    cin >> n;
    
    int max_iterations = n / 12; 

    int twelve = 12;
    bool flag = true;
    for (int i = max_iterations; i >= 0; i--) {
        int remainder_part = n - (twelve * i);
        if (isPalindrome(remainder_part)) {
            cout << remainder_part << " " << twelve * i << endl;
            flag = false;
            break;
        }
    }

    if (flag) cout << -1 << endl;
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