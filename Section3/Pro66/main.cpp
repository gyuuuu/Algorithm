#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m;
int cnt = 0;

vector<int> matrix[30];

void DFS(int start, int end, vector<int> v){
	v.push_back(start);
	if(start == end){
		cnt++;
	}
	else{
		for(int i=0; i<matrix[start].size(); i++){
			auto it = find(v.begin(), v.end(), matrix[start][i]);
			if(it == v.end()){
				DFS(matrix[start][i], end , v);
			}
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	
	int a, b;
	// 링크드 리스트 사용 
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		matrix[a].push_back(b);
	}
	
	vector<int> visit;
	DFS(1, n, visit);
	cout << cnt;
	return 0;
}
