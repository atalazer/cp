// Problem: A - Changing a Character
// Contest: AtCoder - AtCoder Beginner Contest 126
// URL: https://atcoder.jp/contests/abc126/tasks/abc126_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, K;
	string S;
	cin >> N >> K >> S;
	S[K-1] -= 'A' - 'a';
	cout << S;
}