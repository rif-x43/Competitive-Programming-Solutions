#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, y, r;
		cin >> n;
		cin >> y >> r;
		
		int sus = r + (y/2)	;
		if (n > sus)
			cout << sus << endl;
		else
			cout << n << endl;
	}
	
	return 0;
}