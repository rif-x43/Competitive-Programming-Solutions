#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, Sa, Sb;
    int A1, A2, A3, B1, B2, B3;
    int max;

    cin >> A >> B;
    if(A>=100 && A<=999 && B>=100 && B<=999)
    {
        //Sum of digits of A
        A1 = (A%100)%10;
        A2 = (A/10)%10;
        A3 = A/100;

        Sa = A1 + A2 + A3;

        //Sum of digits of B
        B1 = (B%100)%10;
        B2 = (B/10)%10;
        B3 = B/100;

        Sb = B1 + B2 + B3;

        if ( Sa >= Sb)
        {
            max = Sa;
        }
        else
        {
            max = Sb;
        }

        cout << max;
    }
}