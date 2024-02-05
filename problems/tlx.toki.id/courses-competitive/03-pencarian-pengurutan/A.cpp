#include <bits/stdc++.h>
using namespace std;

#define MAX 200000;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int N; cin >> N;
  int Q; cin >> Q;

  int inp[N], diff[N], sdiff[N];
  for(int i = 0; i < N; i++){
    cin >> inp[i];
    diff[i] = abs(inp[i] - Q);
    sdiff[i] = diff[i];
  }

  sort(diff, diff+N);
  int terkecil = diff[0];

  int ans = MAX;
  for(int i = 0; i < N; i++){
    if(sdiff[i] == terkecil && inp[i] < ans){
      ans = inp[i];
    }
  }
  cout << ans;
}
