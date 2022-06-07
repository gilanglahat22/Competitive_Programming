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

void solve(){
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll S[n], F[n];
        for(int i = 0; i < n; i++){
            cin >> S[i];
        }
        for(int i = 0; i < n; i++){
            cin >> F[i];
        }
        cout << (F[0] - S[0]);
        for(ll i = 1; i < n; i++){
            if(S[i] < F[i-1]){
                cout << " " << F[i] - F[i-1];
            }
            else{
                cout << " " << F[i] - S[i];
            }
        }
        cout << "\n";
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