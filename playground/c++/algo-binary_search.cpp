#include <bits/stdc++.h>
using namespace std;

/*
# Title
## Keyword
    - O(log n)
    - Sorted array
## References:
    - https://www.youtube.com/watch?v=xrMppTpoqdw
*/

int binary_search(vector<int> array, int target) {
  int low, middle, high, value;
  low = 0;
  high = array.size() - 1;
  while (low <= high) {
    middle = low + (high - low) / 2;
    value = array[middle];

    if (value < target) {
      low = middle + 1;
    } else if (value > target) {
      high = middle - 1;
    } else {
      return middle;
    }
  }
  return -1;
}

int main() {
  vector<int> arr{1, 1, 2, 3, 5, 6, 7, 8, 9, 10, 13, 17, 21};
  cout << "index of 10 : " << binary_search(arr, 10) << endl;
  cout << "index of 11 : " << binary_search(arr, 11) << endl;
  cout << "index of 13 : " << binary_search(arr, 13) << endl;
  cout << "index of 15 : " << binary_search(arr, 15) << endl;
  cout << "index of 21 : " << binary_search(arr, 21) << endl;
  cout << "index of  1 : " << binary_search(arr, 1) << endl;

  return 0;
}
