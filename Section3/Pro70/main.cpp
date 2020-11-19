#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

vector<int> matrix[21];

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		matrix[a].push_back(b);
	}
	
	vector<int> counts(n+1);
	vector<int> visit;
	queue<int> Q;
	Q.push(1);
	visit.push_back(1);
	
	while(!Q.empty()){
		int x = Q.front();
		Q.pop();
		for(int i=0; i<matrix[x].size(); i++){
			auto it = find(visit.begin(), visit.end(), matrix[x][i]);
			if(it == visit.end()){
				Q.push(matrix[x][i]);
				visit.push_back(matrix[x][i]);
				counts[matrix[x][i]] = counts[x] + 1;
			}
		}
	}
	
	for(int i=2; i<counts.size(); i++){
		cout << i << " : " << counts[i] << endl;
	}
	return 0;
}
