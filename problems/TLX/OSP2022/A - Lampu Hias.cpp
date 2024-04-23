#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int P, Q, R;
  cin >> P >> Q >> R;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long t;
    cin >> t;
    if ((t % P == 0) && (t % Q == 0) && (t % R == 0)) {
      cout << "YA\n";
    } else {
      cout << "TIDAK\n";
    }
  }
}
