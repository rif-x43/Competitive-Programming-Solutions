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
    int a, b, x;
    cin >> a >> b >> x;

    vector<int> case_a, case_b;
    int temp = a;
    case_a.push_back(temp);
    while(temp > 0) {
        temp/=x;
        case_a.push_back(temp);
    }
    temp = b;
    case_b.push_back(temp);
    while(temp > 0) {
        temp/=x;
        case_b.push_back(temp);
    }

    int ans = INF;
    for(int i = 0; i < case_a.size(); i++) {
        for (int j = 0; j < case_b.size(); j++) {
            ans = min(ans, i + j + abs(case_a[i] - case_b[j]));
        }
    }
    
    cout << ans << endl;
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