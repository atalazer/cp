#include <iostream>
#include <set>

using namespace std;

int main(){
  int n; cin >> n;
  multiset<int> a;
  for(int i = 0; i < n; i++){
    int cur; cin >> cur;
    if(a.lower_bound(cur) != a.end())
      a.erase(a.lower_bound(cur));
    a.insert(cur);
  }
  cout << a.size();
}
