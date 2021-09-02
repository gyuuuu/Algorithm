#include <iostream>
#include <vector>

using namespace std;

int answer;
vector<int> dp(48);

int DFS(int n){
	if(dp[n] != 0) return dp[n];
	if(n == 1 || n == 2) return n;
	else{
		return dp[n] = DFS(n-1) + DFS(n-2);
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	cout << DFS(n);
	return 0;
}
