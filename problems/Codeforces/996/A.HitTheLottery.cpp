// Topics:
// - Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int dollars[5] = {1,5,10,20,100};

  int n; cin >> n;
  int ans = 0;

  // for(int i = 4; i >= 0; i--){
  //   int d = 0;
  //   if(ans == n){
  //     break;
  //   }
  //   if(n > dollars[i]){
  //     d = n/dollars[i];
  //     n = n - (dollars[i]*d);
  //     ans += d;
  //   }
  // }

  cout << ans;
}
