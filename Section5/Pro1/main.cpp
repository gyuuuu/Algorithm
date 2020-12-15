#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> dp(n+1);
	dp[1] = 1;
	dp[2] = 2;
	
	for(int i=3; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	cout << dp[n];
	return 0;
}
