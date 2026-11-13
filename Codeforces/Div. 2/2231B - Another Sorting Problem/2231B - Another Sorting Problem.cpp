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

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool is_prime_power(int n) {
    if (n < 2) return false;
    
    // Find the smallest prime factor efficiently
    int d = -1;
    if (n % 2 == 0) d = 2;
    else if (n % 3 == 0) d = 3;
    else {
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0) { d = i; break; }
            if (n % (i + 2) == 0) { d = i + 2; break; }
        }
    }

    // If no divisor found, n is prime (p^1)
    if (d == -1) return true;

    // Divide out the found prime factor completely
    while (n % d == 0) n /= d;
    
    return (n == 1);
}

vector<int> get_divisors(int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    sort(all(res));
    return res;
}


void solve() {
    int n;
    cin >> n;
    
    int k = 0;
    vector < int > a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0) k = max(k, a[i - 1] - a[i]);
    }
    
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]) a[i]+=k;
    }
    
    cout << (is_sorted(all(a)) ? Y : N) << endl; 
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