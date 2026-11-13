#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int TestN = N;
    set < int > v;

    bool isDistinct = false;

    while (TestN) {
        v.insert(TestN % 10);
        TestN /= 10;
    }

    if (v.size() <= 1)
        isDistinct = true;
    else {
        if (adjacent_find(v.begin(), v.end()) == v.end())
            isDistinct == true;
        else
            isDistinct == false;
    }
    
    if(isDistinct)
        cout << "Yes";
    else
        cout << "No";

}