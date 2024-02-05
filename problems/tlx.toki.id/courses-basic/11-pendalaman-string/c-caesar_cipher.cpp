#include <bits/stdc++.h>

#define ll long long
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  // Your code
  string s;
  int k;
  cin >> s >> k;

  for (int i = 0; i < s.size(); i++) {
    s[i] = ((s[i] - 'a' + k) % 26) + 'a';
  }

  cout << s << endl;

  return 0;
}
