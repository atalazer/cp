// Problem: A - Ferris Wheel
// Contest: AtCoder - AtCoder Beginner Contest 127
// URL: https://atcoder.jp/contests/abc127/tasks/abc127_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int A, B;
	cin >> A >> B;
	if(A < 5)
		cout << 0 << endl;
	else if(A < 13)
		cout << B/2 << endl;
	else
		cout << B << endl;
	return 0;
}