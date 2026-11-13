#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double orange_fraction = 0;

    for (int i = 0; i < n; i++) {
        double temp;
        cin >> temp;
        orange_fraction += temp;
    }

    cout << (double)(orange_fraction / n) << endl;
}