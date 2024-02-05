#include <iostream>
using namespace std;

int main(){
    int banyak_angka, terbesar, terkecil;
    cin >> banyak_angka;
    for(int i = 0; i < banyak_angka; i++){
        int bilangan;
        cin >> bilangan;

        if(i == 0){
            terbesar = bilangan;
            terkecil = bilangan;
        }

        if(bilangan > terbesar) {
            terbesar = bilangan;
        }
        if(bilangan < terkecil){
            terkecil = bilangan;
        }
    }
    cout << terbesar << " " << terkecil << endl;
    return 0;
}
