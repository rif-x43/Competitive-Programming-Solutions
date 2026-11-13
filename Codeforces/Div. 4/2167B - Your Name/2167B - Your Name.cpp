#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        
        // Sort both strings and compare
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if (s == t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}