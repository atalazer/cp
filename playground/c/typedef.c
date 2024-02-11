#include <stdio.h>

/*
  typedef
  > Semacam shortcut untuk nulis tipe data
*/

typedef char Nama[25];
typedef int Umur;

typedef struct {
  char name[25];
  char password[12];
} User;

int main() {
  Nama name = "Barra";
  Umur age = 17;

  User user1 = {"admin", "admin123"};
  User user2 = {"User", "12345678"};

  printf("Name\t : %-16s\nPassword : %-s\n", user1.name, user1.password);
  printf("Name\t : %-16s\nPassword : %-s\n", user2.name, user2.password);

  printf("\nNama : %s\nUmur : %d\n", name, age);
  return 0;
}
