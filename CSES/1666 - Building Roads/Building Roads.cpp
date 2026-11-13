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

vector<bool> marked;
vector<int> graph[MAXN];

void dfs(int root){
    if(marked[root]) return;
    stack <int> st;
    marked[root] = true;
    st.push(root);

    while(!st.empty()){
        auto node = st.top();
        st.pop();

        for(auto neighbour : graph[node]){
            if(!marked[neighbour]){
                marked[neighbour] = true;
                st.push(neighbour);
            } 
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    marked.resize(n + 1, false);
    for(int i = 1; i <= m; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector <int> disc;
    for (int i = 1; i <= n; i++){
        if(!marked[i]){
            disc.push_back(i);
            dfs(i);
        }
    }

    cout << disc.size() - 1 << endl;
    for(int i = 1; i < disc.size(); i++) cout << disc[i - 1] << " " << disc[i] << endl;
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