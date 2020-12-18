#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> arr(n+1);
	vector<int> dp(n+1);

	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		int max_cnt = 1;
		for(int j=i-1; j>0; j--){
			if(arr[i] > arr[j]){
				max_cnt = max(max_cnt, dp[j]+1);
			}
			else continue;
		}
		dp[i] = max_cnt;
	}
	
	int answer = -1;
	for(auto ele : dp){
		answer = max(answer, ele);
	}
	cout << answer;

	return 0;
}
