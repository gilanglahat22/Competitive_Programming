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
// #define MOD 1e9 + 7;
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

const int MOD = 1e9 + 7;
const int MaxN = (4e4) + 1;
int t,n,dp[MaxN];

bool isPalindrome(int k){
    int t = k;
    int temp = 0;
    while (k){
        temp *= 10;
        temp += k % 10;
        k /= 10;
    }
    return (t == temp); // Cek apakah setelah digit-digitnya dibalik dia sama atau tidak
}

void solve(){
    dp[0] = 1;
    for (int i = 1; i <= 4e4; i++){
        if (isPalindrome(i)){
            for (int j = i; j<=4e4; j++){
                dp[j] = (dp[j] + dp[j - i])%MOD;
            }
        }
    }
    cin >> t;
    for (int i = 0; i<t; i++){
        cin >> n;
        cout << dp[n] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    solve();
    return 0;
}