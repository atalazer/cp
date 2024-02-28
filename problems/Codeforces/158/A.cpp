// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	int counter = 0;
	for(int i = 0; i < N; i++){
		int temp;
		cin >> temp;
		if (temp > K)
			counter++;
	}
	cout << counter;
}
