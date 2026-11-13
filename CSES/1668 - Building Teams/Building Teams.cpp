#include <bits/stdc++.h>
// reusRIFX---
using namespace std;


#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vin(v) for(auto &x : v) cin >> x
#define vout(v) for(auto x : v) cout << x << " "

#define Y "YES"
#define N "NO"

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e+7;

vector <int> graph[MAXN];
vector <int> color;

bool isBipartite(int root){
    stack <int> st;
    if(color[root] == -1){
        color[root] = 0;
        st.push(root);
        
        while(!st.empty()){
            auto node = st.top();
            st.pop();

            for(auto w : graph[node]){
                if(color[w] == -1){
                    color[w] = 1 - color[node];
                    st.push(w);
                } else if (color[w] == color[node]) return false;
            }
        }
    }

    return true;
}

void solve() {
    int n, m; cin >> n >> m;
    color.resize(n + 1, -1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        if(!isBipartite(i)){
            cout << "IMPOSSIBLE";
            return;
        };
    }

    for(int i = 1; i <= n; i++){
        cout << color[i] + 1  << " ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}