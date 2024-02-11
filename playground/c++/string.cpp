#include <iostream>
#include <string>
using namespace std;

int main() {
  // ==============================================================
  // Declare, Assign, and print `string`
  // ==============================================================

  string nama{};
  nama = "Barra";
  cout << "Nama : " << nama << '\n';

  string hobi{"Main Game"};
  cout << "Hobi : " << hobi << '\n';

  hobi = "Coding";
  cout << "Hobi : " << hobi << '\n';

  cout << "-------------------------------------------------\n";

  // ==============================================================
  // Input `string` from stdin
  // ==============================================================

  // string username{}, fullname{};

  // cout << "Masukkan username : ";
  // cin >> username;

  // cout << "Masukkan fullname : ";
  // getline(cin >> ws, fullname);

  // cout << "Username : " << username << '\n';
  // cout << "Fullname : " << fullname << '\n';

  // cout << "-------------------------------------------------\n";

  // ==============================================================
  // Functions/Methods in `string`
  // ==============================================================

  string foo{"bar"};
  string bar{"foo foo foo"};

  // * .lenght() | .size() - Get string total lenght, whitespace included.
  cout << foo.length() << " " << bar.length() << '\n';
  cout << foo.size() << " " << bar.size() << '\n';

  cout << "-------------------------------------------------\n";

  // ==============================================================
  // Quiz `string`
  // ==============================================================
  // * https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/

  string fullname;
  int age;

  cout << "Enter your full name : ";
  getline(cin >> ws, fullname);

  cout << "Enter your age : ";
  cin >> age;

  int letters{static_cast<int>(fullname.length())};
  cout << "Your age + lenght of your name : " << age + letters << '\n';
}
