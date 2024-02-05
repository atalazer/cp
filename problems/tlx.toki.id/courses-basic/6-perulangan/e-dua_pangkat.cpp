#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N % 2 == 0) {
        N /= 2;
    }
    if (N == 1) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }
    return 0;
}
