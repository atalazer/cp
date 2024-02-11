#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n >> n;
  int m1[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> m1[i][j];
    }
  }

  cin >> n >> n;
  int m2[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> m2[i][j];
    }
  }

  bool identik = true, vertikal = true, horisontal = true, diagkiri = true, diagkanan = true;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(identik && m1[i][j] != m2[i][j]) identik = false;
      if(vertikal && m1[i][j] != m2[i][n-1-j]) vertikal = false;
      if(horisontal && m1[i][j] != m2[n-1-i][j]) horisontal = false;
      if(diagkiri && m1[i][j] != m2[n-1-j][n-1-i]) diagkiri = false;
      if(diagkanan && m1[i][j] != m2[j][i]) diagkanan = false;
    }
  }

  if(identik) { cout << "identik\n"; return 0; }
  if(vertikal) { cout << "vertikal\n"; return 0; }
  if(horisontal) { cout << "horisontal\n"; return 0; }
  if(diagkiri) { cout << "diagonal kiri bawah\n"; return 0; }
  if(diagkanan) { cout << "diagonal kanan bawah\n"; return 0; }
  cout << "tidak identik\n";
}
