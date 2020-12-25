#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<vector<int> > matrix(n+2, vector<int>(n+2));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> matrix[i][j];
		}
	}
	vector<vector<int> > dp(n+2, vector<int>(n+2, INT_MAX/2));
	dp[1][1] = matrix[1][1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 && j==1) continue;
			dp[i][j] = min(dp[i-1][j]+matrix[i][j], dp[i][j-1]+matrix[i][j]);
		}
	}
	cout << dp[n][n];
	return 0;
}
