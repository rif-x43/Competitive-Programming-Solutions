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

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    int total_swaps = 0;

    for (int i = 0; i < n; i++) {
        int target = b[i];
        int chosen_index = -1;
        int unused = 0;

        for (int j = 0; j < n; j++) {
            if (!used[j]) {
                if (a[j] <= target) {
                    chosen_index = j;
                    break;
                }
                unused++; 
            }
        }

        if (chosen_index == -1) {
            cout << -1 << endl;
            return;
        }
        
        used[chosen_index] = true;
        total_swaps += unused;
    }

    cout << total_swaps << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}