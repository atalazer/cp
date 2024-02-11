#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, arr[MAX], terbesar = 0, modus;
  cin >> N;

  for(int i = 0; i < MAX; i++){
    arr[i] = 0;
  }

  for(int i = 0; i < N; i++){
    int angka;
    cin >> angka;
    arr[angka]++;
    if(arr[angka] > terbesar){
      terbesar = arr[angka];
      modus = angka;
    } else if(arr[angka] == terbesar && angka > modus){
      modus = angka;
    }
  }
  cout << modus;
}
