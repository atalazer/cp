#include <bits/stdc++.h>

using namespace std;

void solve(){
  int N, P, Q; cin >> N >> P >> Q;

  pair<int, int> E[N+1];
  for(int i = 1; i <= N; i++){
    cin >> E[i].first;
    E[i].second = i;
  }

  sort(E+1, E+N+1);

  int x;
  while(Q--){
    cin >> x;

    int ans = 0;
    cout << ans << "\n";

  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}
