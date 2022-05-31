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

// Penjelasan : Misalkan terdapat suatu bilangan n, bila dicari bilangan yang terdekat dengan n
// tapi harus lebih besar atau sama dengan n dengan menggunakan kombinasi linear dari 8,10,12
// Maka dapat dideduksikan 8a + 10b + 12c >= n dengan n harus seminimum mungkin
// Perhatikan juga bahwa persamaan tersebut equal dengan 4a + 5b + 6c >= n/2
// Apabila n genap maka n/2 pasti bulat, dengan demikian karena gcd(4,5,6)
// Maka, menurut chicken McNugget Theorem, pasti terdapat bilangan terbesar yang tidak bisa dibuat oleh 4,5,6
// Untuk mencari bilangan tersebut, maka kita bisa meninjau bilangan yang tidak bisa dibuat olh 4 dan 5 dahulu
// Menurut Chicken McNugget Theorem, bilangan tersebut adalah 4*5 - 4 - 5 = 11. Nah, karena bilangan diatas 11 pasti bisa dibuat oleh 4 dan 5
// Maka bilangan diatas 11 juga pasti bisa dibuat oleh 4,5,6 juga. Dengan demikian cukup cek bilangan yang <= 11 saja.
// Setelah dikuli, dari 11,10,9,8 semuanya pasti bisa dinyatakan sebagai kombinasi linear dari 4,5,6. 
// Dengan demikian, karena 7 tidak bisa dinyatakn sebagai komibinasi linear dari 4,5,6 => 7 adalah bilangan yang kita maksud.
// Akibatnya untuk n genap, bilangan terbesar yang tidak bisa dibuat oleh 8,10,12 adalah 2 * 7 = 14 
// Yang juga mengakibatkan seluruh bilangan genap yang lebih besar dari itu bisa dibuat jadi kombinasi linear 8,10,12
// Untuk pada kasus soal ini kan diberikan porsi 8 dengan waktu 16, porsi 10 dengan waktu 20, porsi 12 dengan waktu 24
// Dari nilai tersebut bisa dihitungan waktu per porsinya masing-masing porsi tersebut punya waktu 2 semua (sama semua)
// Dengan demikian, kita tidak harus mempedulikan konfigurasi yang mungkin, karena yang ditanya kan waktu minimum yang mungkin
// Untuk n >= 14
// Untuk n genap, jelas bahwa waktu minimum tersebut adalah n*(waktu per porsi) + waktu tunggu = n*2 + 10
// Untuk n ganjil, waktu minimum tersebut adalah (n+1)*2 + waktu tunggu = (n+1)*2 + 10
// Untuk n <= 8, waktu minimum 16 + 10 = 26
// Untuk 8 < n <= 10, waktu minimum 20 + 10 = 30
// Untuk 10 < n <= 12, waktu minimum 24 + 10 = 34
// Untuk 12 < n <= 14, waktu minimum 2 * 16 + 10 = 42

long long logic(long long n){
    if(n <= 8){
        return 26;
    }
    else if(n > 8 && n <= 10){
        return 30;
    }
    else if (n>10 && n<=12){
        return 34;
    }
    else if(n>12 && n<=14){
        return 42;
    }
    else{
        if (n%2 == 0){
            return n*2 + 10;
        }
        else{
            return (n+1)*2 + 10;
        }
    }
}

void solve(){
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        cout << logic(n)%2022 << endl;
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