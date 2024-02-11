#include <iostream>
using namespace std;
int main(){
  // masukkan nilai matriks n x m
  int n, m;
  cin >> n >> m;
  int matriks[n][m];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++) {
      cin >> matriks[i][j];
    }
  }

  // // print matriks
  // for (int i = 0; i < n; i++){
  //   for (int j = 0; j < m; j++) {
  //     cout << matriks[i][j];
  //     if(j < m-1){
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // print rotasi matriks
  for (int i = 0; i < m; i++){
    for (int j = n-1; j >= 0; j--) {
      cout << matriks[j][i];
      if(j>0){
        cout << " ";
      }
    }
    cout << endl;
  }

}
