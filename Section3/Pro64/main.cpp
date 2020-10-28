#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m;
int cnt = 0;
int matrix[21][21];

void DFS(int start, int end, vector<int> visit){
	visit.push_back(start);
	if(start == end){
		cnt++;
	}
	else{
		for(int i=1; i<=n; i++){
			std::vector<int>::iterator it = find(visit.begin(), visit.end(), i);
			if(matrix[start][i] == 1 && it == visit.end()){
				DFS(i, end, visit);
			}
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	
	//vector<vector<int> > matrix(n, vector<int> (n));
	
	for(int i=0; i<m; i++){
		int r, c;
		scanf("%d %d", &r, &c);
		matrix[r][c] = 1;
	}

	vector<int> visit;
	DFS(1, n, visit);
	
	cout << cnt;
	return 0;
}
