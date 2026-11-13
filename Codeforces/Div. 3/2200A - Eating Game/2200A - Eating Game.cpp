#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    vector<int> v(n);
	    int output = 0;
	    
	    
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    
	    int max_value = *(max_element(v.begin(), v.end()));
	    
	    for(auto x : v){
	        if(x == max_value)
	            output++;
	    }
	    
	    cout << output << '\n';
	}
}
