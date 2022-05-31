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

int getDivRecursive(int N){
    if (N == 1){
        return 1;
    }
    else{
        int count = 0;
        for(int i = 1; i <= 9; i++){
            if (N % i == 0){
                count++;
            }
        }
        return getDivRecursive(N-1) * count;
    }
}

void solve(){
    int t; cin >> t;
    while(t--) {
        int N; cin >> N;
        cout << getDivRecursive(N) <<endl;
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