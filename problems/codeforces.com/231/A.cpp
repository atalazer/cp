// Problem: A. Team
// Contest: Codeforces - Codeforces Round 143 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int counter = 0;
	for(int i = 0; i < N; i++){
		int temp = 0;
		int P, V, T;
		cin >> P >> V >> T;
		temp = P+V+T;
		if(temp > 1){
			counter++;
		}
	}
	cout << counter;
}