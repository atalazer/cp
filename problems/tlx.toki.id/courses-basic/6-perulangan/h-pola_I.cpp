#include <iostream>
using namespace std;

int main() {
    int bilangan, kelipatan;
    cin >> bilangan >> kelipatan;

    for (int i = 1; i <= bilangan; i++) {
        if (i % kelipatan == 0) {
            cout << "*";
        } else {
            cout << i;
        }

        if (i == bilangan) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    return 0;
}
