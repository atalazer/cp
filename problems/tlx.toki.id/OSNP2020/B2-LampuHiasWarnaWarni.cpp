#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  char lampu[n+5]; cin >> lampu;

  int ans = -1;

  // Handle Syarat
  if(n < 3 || lampu[0] == lampu[1] || lampu[0] == lampu[2] || lampu[1] == lampu[2]){
    cout << ans;
    return 0;
  }

  for(int i = 3; i < n; i++){
    if(lampu[i] == lampu[i-3]) ans++;
  }

  cout << ans;
}
