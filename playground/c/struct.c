#include <stdio.h>

/*
  Struct
  > Mirip class di bahasa lain, bedanya nggak ada method.
    Cuma ada property/member.
*/

struct User {
  char name[16];
  char password[12];
};

int main() {
  struct User user1 = {"admin", "admin123"};

  printf("Name\t : %-16s\nPassword : %-s", user1.name, user1.password);
  return 0;
}
