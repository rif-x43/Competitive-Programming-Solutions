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

vector <int> graph[MAXN], idx;
vector <bool> marked;
map <int, int> parent;
int cycStart = -1, cycEnd = -1;

bool hasCycle(int root){
    if(!marked[root]){
        marked[root] = true;
        parent[root] = -1;

        stack <int> st;
        st.push(root);

        while(!st.empty()){
            int node = st.top();
            if(idx[node] == graph[node].size()){
                st.pop();
                continue;
            }

            int w = graph[node][idx[node]++];
            if(w == parent[node]) continue;
            if(marked[w]){
                cycStart = w;
                cycEnd = node;
                return true;
            }

            marked[w] = true;
            parent[w] = node;
            st.push(w);
        }
    }
    
    return false;
}

void solve() {
    int n, m; cin >> n >> m;
    marked.resize(n + 1, false);
    idx.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector <int> path;
    for(int i = 1; i <= n; i++){
        if(hasCycle(i)){
            path.push_back(cycStart);
            for (int x = cycEnd; x != cycStart; x = parent[x]) path.push_back(x);
            path.push_back(cycStart);
            break;
        }
    }

    if(!path.size()){
        cout << "IMPOSSIBLE";
        return;
    }

    cout << path.size() << endl;
    vout(path);
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