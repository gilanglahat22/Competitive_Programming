// Disjoint Set Union
// Union by rank & Path compression

#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b)        for(int i = a; i <= b; i++)

typedef long long int ll;

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

ll n, par[MAX_N], sz[MAX_N], num_grp;

void buildSet(ll x){
    par[x] = x;
    sz[x] = 1;
}

ll find(ll u) {
    return u == par[u] ? u : par[u] = find(par[u]);
}
 
void merge(ll u, ll v) {
    u = find(u), v = find(v);
    if (u == v) return;
    if (sz[u] > sz[v]) swap(u, v);
    par[u] = v;
    sz[v] += sz[u];
    num_grp--;
}

void solve() {
    cin >> n;
    num_grp = n;
    rep(i,0,n-1){
        buildSet(i);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; tc = 1;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}