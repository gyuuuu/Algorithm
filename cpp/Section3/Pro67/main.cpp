#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m;
int min_cost = 12700000;
int matrix[21][21];

void DFS(int s, int e, vector<int> v, int cost){
	v.push_back(s);
	if(s == e){
		min_cost = min(min_cost, cost);
	}
	else{
		for(int i=1; i<=n; i++){
			if(matrix[s][i] != 0){
				auto it = find(v.begin(), v.end(), i);
				if(it == v.end()){
					DFS(i, n, v, cost+matrix[s][i]);
				}
			}
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<m; i++){
		int r, c, w;
		scanf("%d %d %d", &r, &c, &w);
		matrix[r][c] = w;
	}
	
	vector<int> visit;
	int cost = 0;
	DFS(1, n, visit, cost);
	
	cout << min_cost;
	
	return 0;
}
