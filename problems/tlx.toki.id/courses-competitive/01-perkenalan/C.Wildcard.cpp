#include <iostream>
using namespace std;

bool isMatched(string pattern, string match) {
  if (pattern.size() - 1 > match.size())
    return false;

  int star = pattern.find("*");
  string before = pattern.substr(0, star);
  string after = pattern.substr(star + 1);

  string matchBefore = match.substr(0, before.size());
  string matchAfter = match.substr(match.size() - after.size());

  return before == matchBefore && after == matchAfter;
}

int main() {
  string pattern;
  cin >> pattern;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string match;
    cin >> match;
    if (isMatched(pattern, match)) {
      cout << match << '\n';
    }
  }
}
