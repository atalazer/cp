#include <stdio.h>
#include <string.h>

int main() {

  // String Function
  // - strlen(s)            -> return string lenght as integer (int)
  // - strrev(s)            -> reverse string
  // - strlwr(s)            -> make s lowercase
  // - strupr(s)            -> make s uppercase
  // - strcat(s1, s2)       -> concat/appends s2 to end of s1
  // - strncat(s1, s2, n)   -> concat/appends n characters from s2 to end of s1
  // - strcpy(s1, s2)       -> copy s2 to s1
  // - strncpy(s1, s2, n)   -> copy n characters from s2 to s1
  // - strset(s, c)         -> sets all characters of string `s` with given characters `c`
  // - strnset(s, c, 1)     -> sets first n characters of string `s` with given characters `c`
  // - strcmp(s1, s2)       -> string compare all characters                  | return boolean
  // - strncmp(s1, s2, n)   -> string compare n characters                    | return boolean
  // - stricmp(s1, s2)      -> string compare all characters with ignore case | return boolean
  // - strnicmp(s1, s2, n)  -> string compare n characters with ignore case   | return boolean

  char name[] = "Atalazerrr";
  char country[] = "Indonesia";
  char city[] = "Jakarta";

  printf("Name: %s\n", name);
  printf("Country: %s\n", country);
  printf("City: %s\n", city);

  char address[] = "";
  strcat(address, city);
  strcat(address, country);

  printf("Adress: %s\n", address);

  return 0;
}
