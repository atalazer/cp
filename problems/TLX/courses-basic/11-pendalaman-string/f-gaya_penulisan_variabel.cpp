#include <bits/stdc++.h>

#define ll long long
#define endl "\n"

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(0); cin.tie(0);

  string s; cin >> s;

  // Idea:
  // uppercase: 32 -> 'a'-'A'
  // lowercase: -32 -> 'A'-'a'

  if(s.find("_") != -1){
    while(s.find('_') != -1){
      int pos = s.find("_");
      s[pos+1] -= 32;
      s.erase(pos, 1);
    }
  } else {
    for(int i = 0; i < s.size(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z') {
        s[i] += 32;
        s.insert(i, "_");
      }
    }
  }

  cout << s << endl;
  return 0;
}
