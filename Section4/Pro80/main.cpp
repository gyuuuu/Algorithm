#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge{
	int v, w;
	
	bool operator <(Edge const & other) const{
		return w > other.w;
	}
};

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	vector<pair<int, int> > matrix[21];
	for(int i=0; i<m; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		matrix[a].push_back(make_pair(b, c));
	}
	
	priority_queue<Edge> pq;
	pq.push(Edge{1, 0});
	vector<int> dist(n+1, INT_MAX);
	
	while(!pq.empty()){
		int pos = pq.top().v;
		int weight = pq.top().w;
		pq.pop();
		if(weight > dist[pos]) continue;
		for(int i=0; i<matrix[pos].size(); i++){
			int next = matrix[pos][i].first;
			int next_w = weight + matrix[pos][i].second;
			if(dist[next] > next_w){
				dist[next] = next_w;
				pq.push(Edge{next, next_w});
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		cout << i << " : ";
		if(dist[i] == INT_MAX) cout << "impossible" << endl;
		else cout << dist[i] << endl;
	}
	return 0;
}
