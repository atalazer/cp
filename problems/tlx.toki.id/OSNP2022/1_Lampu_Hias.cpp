#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cin.tie(0);
    
    int p, q, r;
    cin >> p >> q >> r;

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        long long t; cin >> t;
        if((t % p == 0) && (t % q == 0) && (t % r == 0)){
            cout << "YA\n";
        } else {
            cout << "TIDAK\n";
        }
    }
}