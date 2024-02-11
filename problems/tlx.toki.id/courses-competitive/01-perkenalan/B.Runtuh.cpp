#include <iostream>
using namespace std;

int R, C;
char grid[21][9];

int findLastRow() {
  int lastRow = 0;
  for (int row = 1; row <= R; row++) {
    bool isColFullWithBlackSquares = true;
    for (int col = 1; col <= C; col++) {
      if (grid[row][col] != '1')
        isColFullWithBlackSquares = false;
    }
    if (isColFullWithBlackSquares) {
      lastRow = row;
      for (int col = 1; col <= C; col++) {
        grid[row][col] = '0';
      }
    }
  }
  return lastRow;
}

int countBlackSquaresAbove(int lastRow, int col) {
  int totalBlackSquares = 0;
  for (int row = 1; row < lastRow; row++) {
    if (grid[row][col] == '1')
      totalBlackSquares++;
  }
  return totalBlackSquares;
}

int findLastRowToFall(int lastRow, int col) {
  int lastRowToFall = lastRow;
  for (int row = lastRow; row <= R; row++) {
    if (grid[row + 1][col] == '1' || row == R) {
      lastRowToFall = row;
      break;
    }
  }
  return lastRowToFall;
}

void collapse(int lastRow, int blackSquares, int col) {
  for (int row = lastRow; row >= 1; row--) {
    grid[row][col] = (row > lastRow - blackSquares) ? '1' : '0';
  }
}

int main() {
  // Input:
  cin >> R >> C;
  for (int i = 1; i <= R; i++) {
    for (int j = 1; j <= C; j++) {
      cin >> grid[i][j];
    }
  }

  // Process:
  int lastRow = findLastRow();
  while (lastRow > 0) {
    for (int col = 1; col <= C; col++) {
      int blackSquares = countBlackSquaresAbove(lastRow, col);
      int lastRowToFall = findLastRowToFall(lastRow, col);
      collapse(lastRowToFall, blackSquares, col);
    }
    lastRow = findLastRow();
  }

  // Output
  for (int i = 1; i <= R; i++) {
    for (int j = 1; j <= C; j++) {
      cout << grid[i][j];
    }
    cout << '\n';
  }
}
