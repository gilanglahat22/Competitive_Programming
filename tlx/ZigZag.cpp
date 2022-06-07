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
    int A[t];
    int sum = 0;
    for(int i = 0; i <t; i++){
        cin >> A[i];
        sum += A[i];
    }
    for(int i = 0; i <t; i++){
        if(i < (t-1)){
            if(A[i] > floor(sum/2)){
                cout << "NO\n"; return;
            }
        }else{
            if(A[i] > floor((sum+1)/2)){
                cout << "NO\n"; return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    solve();
    return 0;
}