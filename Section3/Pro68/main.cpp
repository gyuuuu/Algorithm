#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <climits>

using namespace std;

vector<pair<int,int> > matrix[21];
int cost = INT_MAX;

void DFS(int s, int e, int sum, vector<int> visit){
	visit.push_back(s);
	if(s == e){
		cost = min(sum, cost);
	}
	else{
		for(int i=0; i<matrix[s].size(); i++){
			auto it = find(visit.begin(), visit.end(), matrix[s][i].first);
			if(it == visit.end()){
				DFS(matrix[s][i].first, e, sum+matrix[s][i].second, visit);
			}
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	int r, c, w;
	for(int i=1; i<=m; i++){
		scanf("%d %d %d", &r, &c, &w);
		matrix[r].push_back(make_pair(c, w));
	}
	vector<int> visit;
	DFS(1, n, 0, visit);
	cout << cost;
	return 0;
}
