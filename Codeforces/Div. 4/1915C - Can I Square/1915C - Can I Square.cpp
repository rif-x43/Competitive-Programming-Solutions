#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    if (n == 0) return true;
    
    long long left = 1, right = min(n, (long long)1e9);
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long sq = mid * mid;
        
        if (sq == n) return true;
        if (sq < n) left = mid + 1;
        else right = mid - 1;
    }
    
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    while (test--)
    {
        int buckets;
        long long totalsq = 0;

        cin >> buckets;

        for (int i = 0; i < buckets; i++)
        {
            long long input;
            cin >> input;
            totalsq += input;
        }

        cout << (isPerfectSquare(totalsq) ? "YES" : "NO") << '\n';
    }

    return 0;
}