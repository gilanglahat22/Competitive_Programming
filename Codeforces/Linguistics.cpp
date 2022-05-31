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
        int A,B,C,D; cin >> A >> B >> C >> D;
        string s; cin >> s;
        int acnt = 0, bcnt = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i] == 'A') acnt++;
            else bcnt++;
        }
        
        if(s.length() != (A+B+2*C+2*D) || acnt != (A+C+D) || bcnt != (B+C+D)) {
            cout << "NO"<<endl;
            continue;
        }
        
        int kosong = 0;
        vector<int> AB, BA;
        for(int i=0;i<s.length();i++) {
            int j = i, k = i+1;
            while(k < s.length()) {
                if(s[k] != s[k-1])
                    k++;
                else
                    break;
            }
            if(k-j >= 2){
                int l = k-j;
                if(l%2 == 1) kosong += (l-1)/2;
                else if(s[j] == 'A') {
                    AB.push_back(l/2);
                }
                else {
                    BA.push_back(l/2);
                }
            }
        }
        sort(AB.begin(), AB.end());
        sort(BA.begin(), BA.end());
        
        for(auto i:AB) {
            if(C >= i) C -= i;
            else kosong += i-1;
        }
        for(auto i:BA) {
            if(D >= i) D -= i;
            else kosong += i-1;
        }
        
        if(C+D > kosong) cout << "NO" << endl;
        else cout << "YES" << endl;
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