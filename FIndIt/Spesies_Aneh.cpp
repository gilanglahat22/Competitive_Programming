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

// Jujur ini soal aneh banget, gajelas spek soalnya

int lcm(vi A, int i){
    if (i == A.size()-1){
        return A[i];
    }
    return (A[i]*lcm(A, i+1)/__gcd(A[i],lcm(A, i+1)));
}

void solve(){
    vi A;
    int t,y,n; cin >> t;
    while(t--) {
        cin >> y >> n;
        for(int i =0; i<n; i++){
            int B;
            cin >> B;
            if (t==0){
                A.push_back(B);
            }
        }
    }
    cout << y + lcm(A, 0)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    solve();
    return 0;
}