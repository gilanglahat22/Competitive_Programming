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
        int n; cin >> n;
        int A[n];
        for (int i = 0; i<n; i++){
            cin >> A[i];
        }
        if(n%2 == 1){
            cout << "NO" << endl;
        }
        else{
            sort(A,A+n);
            int i = 1;
            while(i<n/2 && i != 0){
                if(A[i] == A[n/2 + i - 1]){cout << "NO" << endl; i=0;}
                else{i++;}
            }
            if (i != 0){
                cout << "YES" << endl;
                for(int i = 0; i<n/2; i++){
                    cout << A[i] << " " << A[n/2 + i] << " ";
                }
                cout << endl;
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