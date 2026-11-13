#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        int output = 0;
        
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
       cout << (is_sorted(v.begin(), v.end()) ? n : 1) << '\n';
    }
}