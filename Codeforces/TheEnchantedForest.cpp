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
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        if(k>=n){
            ll A,sum=0;
            for(int i = 0; i<n; i++){
                cin >> A;
                sum += A;
            }
            cout << sum + n*(2*k - n - 1)/2 << endl;
        }
        else{
            // ll A[n], maximum,sum=0;
            // for(int i = 0; i < n; i++){
            //     cin>> A[i];
            //     sum += A[i];
            // }
            // maximum = sum;
            // for(int i = k; i < n; i++){
            //     cin >> A[i];
            //     sum += A[i] - A[i-k];
            //     maximum = max(maximum, sum);
            // }
            // cout << maximum + k * (k-1)/2 << endl;
            for(int i = 0; i < n; i++){
                ll A; cin >> A;
                
            }
        }
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