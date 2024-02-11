#include <iostream>
using namespace std;

bool isChangable(string A, string B){
  int lenA = A.size();
  int lenB = B.size();

  if(lenA-1 != lenB) return false;

  int countDeleted = 0;
  for(int i = 0; i < lenA; i++){
    if(A[i+countDeleted] != B[i]) {
      countDeleted++;
    }
  }
  return (countDeleted > 1) ? false : true ;
}

int main() {
  string A, B;
  cin >> A >> B;

  if (isChangable(A, B))
    cout << "Tentu saja bisa!";
  else
    cout << "Wah, tidak bisa :(";
}
