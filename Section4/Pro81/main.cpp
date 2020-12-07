#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge{
	int u, v, w;
};

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n,m;
	scanf("%d %d", &n, &m);
	vector<Edge> matrix;
	for(int i=0; i<m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		matrix.push_back(Edge{a,b,c});
	}
	int s, e;
	scanf("%d %d", &s, &e);
	vector<int> dist(n+1, INT_MAX);
	dist[s] = 0;
	
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<matrix.size(); j++){
			int u = matrix[j].u;
			int v = matrix[j].v;
			int w = matrix[j].w;
			if(dist[u] == INT_MAX) continue;
			dist[v] = min(dist[v], dist[u]+w);
		}
	}
	// 음의 싸이클 존재 확인 
	for(int j=0; j<matrix.size(); j++){
		int u = matrix[j].u;
		int v = matrix[j].v;
		int w = matrix[j].w;
		if(dist[u] == INT_MAX) continue;
		if(dist[v] > dist[u]+w){
			dist[e] = -1;
			break;
		}
	}
		
	cout << dist[e];
	return 0;
}
