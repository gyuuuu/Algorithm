#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int n, m;
int cnt = 0;
bool flag = false;
vector<int> arr;

void DFS(int i, int sum){
	if(i == arr.size()){
		if(sum == m) cnt++;
	}
	else{
		DFS(i+1, sum-arr[i]);
		DFS(i+1, sum+arr[i]);
		DFS(i+1, sum);
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		int d;
		scanf("%d", &d);
		arr.push_back(d);
	}
	
	DFS(0, 0);
	
	(cnt == 0) ? cout << -1 : cout << cnt;
	return 0;
}
