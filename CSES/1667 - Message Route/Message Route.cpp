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

vector <bool> marked;
vector <int> graph[MAXN];
map <int, int> parent;

void bfs(int root){
    if(marked[root]) return;
    queue <int> q;
    marked[root] = true;
    parent[root] = -1;
    q.push(root);

    while(!q.empty()){
        auto node = q.front();
        q.pop();

        for(auto neighbour : graph[node]){
            if(!marked[neighbour]){
                marked[neighbour] = true;
                parent[neighbour] = node;
                q.push(neighbour);
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

    bfs(1);
    vector <int> path;
    for(int i = n; i > 0; i = parent[i]) path.push_back(i);
    reverse(all(path));
    
    if(!marked[n]) {
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