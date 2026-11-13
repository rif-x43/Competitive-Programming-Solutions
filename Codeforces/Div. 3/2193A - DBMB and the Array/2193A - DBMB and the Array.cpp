#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> v;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
            sum += input;
        }

        int dif = max(0, s - sum);
        
        if (sum > s)
            cout << "NO" << endl;
        else if (dif == 0 || dif % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        v.clear();
    }
}