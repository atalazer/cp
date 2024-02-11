#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    if (i == 42) {
      cout << "ERROR";
      break;
    } else if (i % 10 == 0) {
      continue;
    } else {
      cout << i << endl;
    }
  }
}
