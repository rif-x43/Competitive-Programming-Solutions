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
    return a / gcd(a, b) * b;
}


void solve() {
    string s;
    cin >> s;
    map < char, int > freq;
    char odd = '?';
    for (int i = 0; i < s.size(); i++) freq[s[i]]++;

    int odd_count = 0, even_count = 0;
    for (auto x: freq) {
        if (x.second & 1) {
            odd_count++;
            odd = x.first;
        }
        else even_count++;
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION";
        return;
    }

    string palin = "";
    odd_count = freq[odd];
    freq[odd] = 0;
    for (char c = 'A'; c <= 'Z'; c++) {
        int cnt = freq[c] / 2;
        palin.append(cnt, c);
    }
    string rev_palin(all(palin));
    reverse(rev_palin.rbegin(), rev_palin.rend());
    if (odd != '?')
    {
        palin.append(odd_count, odd);
    }

    cout << palin << rev_palin;
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