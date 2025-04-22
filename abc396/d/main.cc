#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

struct Edge {
    ll to, cost;
};

vector<bool> visited;
ll ans = LLONG_MAX;
ll n, m;

void dfs(ll v, ll current_xor, vector<vector<Edge>> &G){
    if(v == n-1){
        ans = min(ans, current_xor);
        return;
    }

    visited[v] = true;
    for(auto e : G[v]){
        if(!visited[e.to]){
            dfs(e.to, current_xor ^ e.cost, G);
        }
    }
    visited[v] = false;
}


int main()
{
    cin >> n >> m;

    vector<vector<Edge>> G(n);
    visited.resize(n, false);

    REP(i, m){
        ll u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }

    dfs(0, 0, G);
    cout << ans << endl;
}
