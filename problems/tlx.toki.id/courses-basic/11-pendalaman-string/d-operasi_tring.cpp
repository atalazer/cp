#include <bits/stdc++.h>

#define ll long long
#define endl "\n"

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(0); cin.tie(0);

  // Your code
  string s, a, b, c;
  cin >> s >> a >> b >> c;

  int del = s.find(a);
  s.erase(del, a.size());

  int add = s.find(b);
  s.insert(add+b.size(), c);

  cout << s << endl;

  return 0;
}

