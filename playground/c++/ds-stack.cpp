#include <bits/stdc++.h>
using namespace std;

/*
# Stack (Tumpukan)
## Keyword:
    - LIFO (Last-In First-Out)
    - Menara vertikal
    - Keranjang
## Use-cases:
    - Undo/redo function
    - Move back/forward through history
    - Backtracking algorithms (e.g maze)
    - Function stack
## Methods:
    - push()
    - pop()
    - top()
    - empty()
## Reference:
    - https://www.youtube.com/watch?v=KInG04mAjO0
*/


int main(){
  stack<int> stack;

  cout << stack.empty() << endl; // output: 1

  stack.push(10);
  stack.push(20);

  cout << stack.empty() << endl; // output: 0
  cout << stack.top() << endl; // output: 20
  
  stack.pop();

  cout << stack.top() << endl; // output: 10

  return 0;
}

