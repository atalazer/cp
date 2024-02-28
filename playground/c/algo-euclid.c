#include <stdio.h>

// Program: GCD (Greatest Common Divisor) and LCM (Least Common Multiple)
// Nama Lain: FBP dan KPK

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b){
  return (a*b)/gcd(a, b);
}

int main(){
  int t = 1;

  while(t--){
    int a, b;
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);
    printf("gcd(%d, %d) is %d\n", a, b, gcd(a, b));
    printf("lcm(%d, %d) is %d\n", a, b, lcm(a, b));
  }
}
