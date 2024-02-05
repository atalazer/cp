// promblem-url: https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  char username[101];
  cin >> username;
  int l = strlen(username);
  int lenght = 0;

  sort(username, username + l);

  for (int i = 0; i < l; i++) {
    if (username[i] != username[i + 1]) {
      lenght++;
    }
  }

  if (lenght % 2 == 0) {
    cout << "CHAT WITH HER!\n";
  } else {
    cout << "IGNORE HIM!\n";
  }
}
