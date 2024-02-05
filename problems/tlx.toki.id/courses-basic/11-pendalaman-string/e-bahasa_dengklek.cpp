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

  for(int i = 0; i < s.size(); i++){
    s[i] += (s[i] < 97) ? 32 : -32;
  }

  cout << s << endl;

  return 0;
}

