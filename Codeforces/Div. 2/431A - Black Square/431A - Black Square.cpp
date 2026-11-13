#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
} 


void solve() {
    int a, b, c, d;
    string s;
    cin >> a >> b >> c >> d;
    cin >> s;
    
    int calorie_waste = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1') calorie_waste+= a;
        else if(s[i] == '2') calorie_waste+= b;
        else if(s[i] == '3') calorie_waste+= c;
        else calorie_waste+= d;
    }
    
    cout << calorie_waste << endl;
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