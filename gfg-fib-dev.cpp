#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp) {
	if (n == 1 || n == 0) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
	return dp[n];
}


int main() {
	int n;
	cin >> n;
	vector<int> dp(n + 1, -1);
	int result = fib(n, dp);
	cout << result;
	return 0;
}