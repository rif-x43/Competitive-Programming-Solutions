#include <bits/stdc++.h>

using namespace std;

int digitSum(int n) {
    int digitsum = 0;
    while (n) {
        digitsum += n % 10;
        n /= 10;
    }

    return digitsum;
}

int main() {

    int n, k;
    cin >> n >> k;
    
    vector<int> v;
    
    for (int i = 1; i <= n; i++){
        v.push_back(digitSum(i));
    }
    
    int freq = count(v.begin(), v.end(), k);
    
    cout << freq;
}