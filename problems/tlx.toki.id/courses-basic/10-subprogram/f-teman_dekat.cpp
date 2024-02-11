#include <bits/stdc++.h>
using namespace std;

int hitungT(int x_i, int y_i, int x_j, int y_j, int D){
  return pow(abs(x_j-x_i), D)+pow(abs(y_j-y_i), D);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, D;
  unsigned int min = -1, max = 0;
  cin >> N >> D;
  
  int arr[N][2];
  for(int i = 0; i < N; i++){
    cin >> arr[i][0] >> arr[i][1];
  }
  for(int i = 0; i < N; i++){
    for(int j=i+1; j<N; j++){
      int T = hitungT(arr[i][0], arr[i][1], arr[j][0], arr[j][1], D);
      if(T<min){
        min = T;
      }
      if(T>max){
        max = T;
      }
    }
  }

  cout << min << " " << max;
}
