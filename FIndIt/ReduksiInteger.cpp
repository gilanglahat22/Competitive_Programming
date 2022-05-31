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

void Maksimum(string s){
    int j=0;
    for(int i=s.length()-1;i>0;i--)
    {
        if((s[i]-'0')+(s[i-1]-'0')>=10)
        {
            j=i-1;
            break;
        }
    }
    cout<<s.substr(0,j)<<(s[j]-'0')+(s[j+1]-'0')<<s.substr(j+2)<<" ";
}

void Minimum(string s){
    int j=0;
    for(int i=s.length()-1;i>0;i--)
    {
        if((s[i]-'0')+(s[i-1]-'0')<10)
        {
            j=i-1;
            break;
        }
    }
    cout<<s.substr(0,j)<<(s[j]-'0')+(s[j+1]-'0')<<s.substr(j+2)<<endl;
}

void solve (){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string N;
		cin>>N;
        Maksimum(N);
        Minimum(N);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    solve();
}


