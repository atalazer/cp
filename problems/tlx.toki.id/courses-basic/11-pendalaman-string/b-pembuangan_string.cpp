#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(0); cin.tie(0);

  string S, T; cin >> S >> T;

  while(S.find(T) != -1){
    int id = S.find(T);
    S.erase(id, T.size());
  }
  cout << S << endl;
}

