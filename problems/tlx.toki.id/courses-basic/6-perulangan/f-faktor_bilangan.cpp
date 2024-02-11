#include <iostream>
using namespace std;

int main(){
    int bilangan;
    cin >> bilangan;
    for(int i = bilangan; i > 0 && i <= bilangan; i--){
        if (bilangan % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}
