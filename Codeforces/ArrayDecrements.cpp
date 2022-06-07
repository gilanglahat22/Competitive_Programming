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
    int n; cin >> n;
    ll A[n], B[n];
    ll MAXIndexSelisih = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        cin >> B[i];
        if((A[MAXIndexSelisih] - B[MAXIndexSelisih]) < (A[i] - B[i])){
            MAXIndexSelisih = i;
        }
    }
    for (int i = 0; i < n; i++){
        if(B[i] > A[i]){
            cout << "NO" << endl;
            return;
        }
        if(i != MAXIndexSelisih){
            if(B[i] != 0){
                if(A[MAXIndexSelisih] - B[MAXIndexSelisih] != (A[i] - B[i])){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
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