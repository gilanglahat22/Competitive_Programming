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
        string A; cin >> A;
        string temp = "";
        int minjem = 0;
        // Untuk bilangan yang 
        if(A[0] == '9'){
            for(ll i = n-1; i>= 0; i--){
                if('1' - minjem < A[i]){
                    temp += '1' + 10 - minjem - A[i] + '0';
                    minjem = 1;
                }
                else{
                    temp += '1' - minjem - A[i] + '0';
                    minjem = 0;
                }
            }
        }else{
            // for(ll i = n-1; i>= 0; i--){
            //     if(i == n-1){
            //         if('1' < A[i]){
            //             temp += '1' + 10 - A[i] + '0';
            //             minjem = 1;
            //         }
            //         else{
            //             temp += '1' - A[i] + '0';
            //             minjem = 0;
            //         }
            //     }else{
            //         if(10 - minjem < A[i]){
            //             temp += '0' + 10 - minjem - A[i] + '0';
            //             minjem = 1;
            //         }
            //         else{
            //             temp += '0' - minjem - A[i] + '0';
            //             minjem = 0;
            //         }
            //     }
            // }
            for(ll i = n-1; i>= 0; i--){
                temp += '9' - A[i] + '0';
            }
        }
        reverse(temp.begin(), temp.end());
        cout << temp << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    return 0;
}