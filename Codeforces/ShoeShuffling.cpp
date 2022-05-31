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
        int S[n];
        for(int i = 0; i < n; i++){
            cin >> S[i];
        }
        bool noSolution = false;
        vector<vector<int>> result;
        int i = 0;
        while(i<n){
            vector<int> temp;
            temp.push_back(i+1);
            int j = i+1;
            while(j<n && S[i] == S[j]){
                temp.push_back(j+1);
                j++;
            }
            i = j;
            if(temp.size() == 1){
                cout << -1 << endl; noSolution = true; break;
            }
            else{
                result.push_back(temp);
            }
        }
        if(noSolution == false){
            for(vector<int> row: result){
                for(int i=1; i<row.size(); i++){
                    cout << row[i] << " ";
                }
                cout << row[0] << endl;
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