#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector < int > v(n);
    int max_element = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        max_element = max(max_element, v[i]);
    }

    vector < int > count(max_element + 1, 0);
    
    for (int x: v)
        count[x]++;

    for (int i = max_element - 1; i >= 1; i--) 
        count[i] += count[i + 1];

    vector < int > res;
    int carry = 0;
    
    for (int i = 1; i <= max_element || carry; i++) {
        int val = carry + (i <= max_element ? count[i] : 0);
        res.push_back(val % 10);
        carry = val / 10;
    }

    reverse(res.begin(), res.end());
    for (int x: res) cout << x;

    return 0;
}