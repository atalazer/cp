#include <iostream>
using namespace std;

unsigned int N, T;
int main(){
    T = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        unsigned int B;
        cin >> B;
        T = T + B;
    }
    cout << T << endl;

    return 0;
}
