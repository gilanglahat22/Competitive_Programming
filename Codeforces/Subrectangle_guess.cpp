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
        ll n,m; cin >> n >> m;
        ll maximum, rowMaxNum, colMaxNum;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ll A; cin >> A;
                if((i == 0) && (j == 0)){
                    maximum = A;
                    rowMaxNum = i+1;
                    colMaxNum = j+1;
                }
                else{
                    if(A == max(maximum, A)){
                        maximum = A;
                        rowMaxNum = i+1;
                        colMaxNum = j+1;
                    }
                }
            }
        }
        cout << max(max((rowMaxNum * colMaxNum), (n-rowMaxNum+1)*colMaxNum), max(rowMaxNum*(m-colMaxNum+1), (n-rowMaxNum+1)*(m-colMaxNum+1))) << "\n";
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