#include <iostream>

using namespace std;

// --------------Helper------------------
void title(string msg){
  cout << '\n';
  cout << "============================================\n";
  cout << msg << '\n';
  cout << "============================================\n";
}

// --------------------------------------

// Should be <= 30 to avoid overflow
const int MAX_POWER = 8;

// Reversed
// 13 --> 1101...
void __binaryRepresentation(int num) {
  for (int i = 0; i <= MAX_POWER; i++) {
    if ((num & (1 << i)) != 0)
      cout << 1;
    else
      cout << 0;
  }
}

// Normal
// 13 --> ...1101
void binaryRepresentation(int num) {
  cout << "Binary Representation of " << num << " : ";

  for (int i = MAX_POWER; i >= 0; i--) {
    // For condition: Use `(x & (1 << i))` Or `((x >> i) & 1)`
    if (((num >> i) & 1) != 0)
      cout << 1;
    else
      cout << 0;
  }

  cout << '\n';
}

int main() {
  int a, b;
  // a = 7; b = 5;
  a = 21;
  b = 13;

  title ("Bitwise: Representation");
  binaryRepresentation(a);
  binaryRepresentation(b);

  // Bitwise Operator
  title("Bitwise: Operator");
  int AND, OR, XOR, NEG_A, NEG_B;
  AND = (a & b);
  OR = (a | b);
  XOR = (a ^ b);
  NEG_A = (~a);
  NEG_B = (~b);

  cout << "Operator AND result   : " << AND << "\n";
  cout << "Operator  OR result   : " << OR << "\n";
  cout << "Operator XOR result   : " << XOR << "\n";
  cout << "Operator NEG-A result : " << NEG_A << "\n";
  cout << "Operator NEG_B result : " << NEG_B << "\n";
  
  binaryRepresentation(AND);
  binaryRepresentation(OR);
  binaryRepresentation(XOR);
  binaryRepresentation(NEG_A);
  binaryRepresentation(NEG_B);

  // Bitwise shift
  title("Bitwise: Shift");
  const int x = 10;
  binaryRepresentation(x);
  binaryRepresentation(x >> 1); // 5
  binaryRepresentation(x >> 2); // 2
  binaryRepresentation(x >> 4); // 0
  binaryRepresentation(x << 1); // 20
  binaryRepresentation(x << 3); // 80
  binaryRepresentation(x << 5); // 320

  // Bitwise Tricks
  title("Bitwise: Tricks");

}
