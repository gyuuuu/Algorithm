#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > arr(21, vector<int>(21));
vector<vector<int> > dp(21, vector<int>(21));

int DP(int i, int j){
	if(dp[i][j] != 0) return dp[i][j];
	if(i==0 && j==0) return arr[0][0];
	else{
		if(i==0) return dp[i][j] = DP(i, j-1)+arr[i][j];
		else if(j==0) return dp[i][j] = DP(i-1, j)+arr[i][j];
		else{
			return dp[i][j] = min(DP(i-1, j), DP(i, j-1))+arr[i][j];
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	cout << DP(n-1, n-1);
	return 0;
}
