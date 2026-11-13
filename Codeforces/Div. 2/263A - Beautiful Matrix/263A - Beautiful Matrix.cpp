#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int array[6][6];
    int i_pos, j_pos;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> array[i][j];
            if (array[i][j] == 1)
            {
                i_pos = i;
                j_pos = j;
            }
        }
    }

    cout << abs(i_pos - 3) + abs(j_pos - 3) << endl;

    return 0;
}