#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	vector<int> dp(n);
	dp[0] = 1;
	for(int i=1; i<n; i++){
		int max_cnt = 1;
		for(int j=i-1; j>=0; j--){
			if(arr[i] > arr[j]){
				max_cnt = max(max_cnt, dp[j]+1);
			}
			else continue;
		}
		dp[i] = max_cnt;
	}
	int answer = -1;
	for(auto & ele : dp){
		answer = max(ele, answer);
	}
	cout << answer;
	return 0;
}
