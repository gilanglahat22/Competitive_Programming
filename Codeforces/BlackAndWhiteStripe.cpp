// This code made by Muhammad Gilang Ramadhan

#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

void logic(){
    ll n,k; cin >> n >> k;
    string S; cin >> S;
    ll countWhite = 0;
    for(int i = 0; i < k; i++){
        if(S[i] == 'W'){
            countWhite++;
        }
    }
    if(countWhite == 0){
        cout << 0 << '\n';
        return;
    }
    ll MINIMUM = countWhite;
    for(int v = k; v < n; v++){
        if(S[v-k] == 'W'){
            countWhite--;
        }
        if(S[v] == 'W'){
            countWhite++;
        }
        if(MINIMUM > 0){
            MINIMUM = min(MINIMUM, countWhite);
        }
        else{
            cout << 0 << '\n';
            return;
        }
    }
    cout << MINIMUM << '\n';
}

void solve(){
    int t; cin >> t;
    while(t--) {
        logic();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    solve();
    return 0;
}