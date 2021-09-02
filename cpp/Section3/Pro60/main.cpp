#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool flag = false;
int total = 0;
vector<int> arr;
void DFS(int i, int sum);

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int d;
		scanf("%d", &d);
		arr.push_back(d);
		total += d;
	}
	
	int sum = 0;
	DFS(0, sum);
	
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}

void DFS(int i, int sum){
	if(sum > total/2) return;
	if(flag == true) return;
	if(i == arr.size()){
		if(sum == total-sum) flag = true;
	}
	else{
		DFS(i+1, sum+arr[i]);
		DFS(i+1, sum);
	}
}
