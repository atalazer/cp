#include <bits/stdc++.h>

using namespace std;

array<int, 100> stek;
int head, tail, x;

int pop() {
  if (head == tail)
    return -1;

  int val = stek[head];
  head++;
  return val;
}

int main() {
  stek[2] = 5;
  stek[1] = 3;
  stek[0] = 1;
  stek[3] = 7;
  stek[4] = 9;

  head = 0;
  tail = 5;

  /* pop(); // head = 0->1 */
  /* for (x = 0; x < 3; x++) { */
  /*     cout << pop() << endl; // head = 1->2 | 2->3 | 3->4 */
  /* } */
  /* pop(); // head = 4->5 */
  // ANSWER: 357

  pop(); // head = 0->1
  for (x = 0; x < 3; x++) {
    if (pop() != -1)         // head = 1->2 | 3->4
      cout << pop() << endl; // head = 2->3 | 4->5
  }
  pop(); // head = 5->6
  // ANSWER: 59
}
