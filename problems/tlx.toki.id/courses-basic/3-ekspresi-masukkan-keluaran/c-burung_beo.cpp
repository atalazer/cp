#include <cstdio>
#include <string>
using namespace std;
int main(){
    char buffer[1001];
    scanf("%[^\n]", buffer);
    string word = buffer;
    printf("%s\n", word.c_str());
}
