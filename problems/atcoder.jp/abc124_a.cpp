// Problem: A - Buttons
// Contest: AtCoder - AtCoder Beginner Contest 124
// URL: https://atcoder.jp/contests/abc124/tasks/abc124_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, B;
	cin >> A >> B;
	
	int chance = 2;
	int counter = 0;
	
	while(chance > 0){
		if(A>B){
			counter += A;
			A--;
		} else {
			counter += B;
			B--;
		}
		chance--;
	}
	cout << counter;
}