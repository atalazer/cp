#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  int k;
  cin >> k;

  int arr[n][m], menarik[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int kanan = 1, kiri = 1, atas = 1, bawah = 1;
      if (i != 0) atas = arr[i - 1][j];
      if (i != n - 1) bawah = arr[i + 1][j];
      if (j != 0) kiri = arr[i][j - 1];
      if (j != m - 1) kanan = arr[i][j + 1];
      menarik[i][j] = atas * bawah * kanan * kiri;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if(menarik[j][i] == k){
        cout << j+1 << " " << i+1;
        return 0;
      }
    }
  }
  cout << 0 << " " << 0;
}
