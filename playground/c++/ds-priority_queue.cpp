#include <bits/stdc++.h>
#include <queue>
using namespace std;

/*
# Priority Queue (Antrian)
## Keyword
    - FIFO (First-In First-Out)
    - Sudah diurutkan (sorted)
## Use-cases:
    - 
    - 
## Methods:
    - push()
    - pop()
    - top()
    - empty()
## References:
    - https://www.youtube.com/watch?v=7z_HXFZqXqc
*/


int main(){
  priority_queue<int> nilai;

  nilai.push(90);
  nilai.push(88);
  nilai.push(93);
  nilai.push(92);

  cout << nilai.top() << endl;  // output: 93

  nilai.pop();
  cout << nilai.top() << endl;  // output: 92

  return 0;
}

