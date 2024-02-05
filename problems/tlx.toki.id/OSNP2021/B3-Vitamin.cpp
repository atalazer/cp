#include <iostream>
using namespace std;

// n: banyaknya jenis vitamin yang dijual
// m: banyak uang yang dimiliki
// h: harga vitamin ke-i
// k: kandungan vitamin ke-i
// d: dosis vitamin ke-i (0 -> dosis rendah; 1 -> dosis tinggi)

int n, m;
int h[1005], k[1005], d[1005];
int dp[1005][10005] = {};

int main(){
  cin >> n >> m;

  for(int i = 1; i <= n; i++){
    cin >> h[i] >> k[i] >> d[i];
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      dp[i][j] = dp[i-1][j];

      if(j - h[i] >= 0){
        if(d[i]) dp[i][j] = max(dp[i][j], k[i] + dp[i-1][j-h[i]]);
        else     dp[i][j] = max(dp[i][j], k[i] + dp[i][j-h[i]]);
      }
    }
  }

  cout << dp[n][m];
}
