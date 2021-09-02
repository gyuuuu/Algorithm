#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

char oper[] = {'+', '-', '*', '%'};
vector<int> num_oper(5);
int n;
vector<int> nums(15);

int min_val = INT_MAX;
int max_val = INT_MIN;
void DFS(int id, int val){
	if(id == n){
		min_val = min(min_val, val);
		max_val = max(max_val, val);
	}
	else{
		if(num_oper[0] > 0){
			num_oper[0]--;
			DFS(id+1, val+nums[id]);
			num_oper[0]++;
		}
		if(num_oper[1] > 0){
			num_oper[1]--;
			DFS(id+1, val-nums[id]);
			num_oper[1]++;
		}
		if(num_oper[2] > 0){
			num_oper[2]--;
			DFS(id+1, val*nums[id]);
			num_oper[2]++;
		}
		if(num_oper[3] > 0){
			num_oper[3]--;
			DFS(id+1, val/nums[id]);
			num_oper[3]++;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);

	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &nums[i]);
	}
	
	for(int i=0; i<4; i++){
		scanf("%d", &num_oper[i]);
	}
	
	DFS(1, nums[0]);
	cout << max_val << endl;
	cout << min_val << endl;
	return 0;
}
