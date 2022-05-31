#include <bits/stdc++.h>
using namespace std;
int solve(int k){
    int temp = k%10;
    k /= 10;
    while(k){
        if (temp > k % 10){
            temp = k % 10;
        }
        k /= 10;
    }
    return temp;
}
int main(){
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        if ((n / 10) <= 9 & (n / 10) >= 1){
            cout << n%10 << endl;
        }else{
            cout << solve(n) << endl;
        }
    }

    return 0;
}