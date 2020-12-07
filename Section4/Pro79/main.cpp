#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Edge{
	int v;
	int w;
	Edge(int vertex, int weight){
		v = vertex;
		w = weight;
	}
	
	bool operator < (Edge const & other) const{
		return w > other.w;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int num_v, num_e, answer = 0;
	vector<pair<int, int> > matrix[101];
	vector<int> ch(101);
	scanf("%d %d", &num_v, &num_e);
	for(int i=0; i<num_e; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		matrix[a].push_back(make_pair(b,c));
		matrix[b].push_back(make_pair(a,c));
	}
	
	priority_queue<Edge> pq;
	pq.push(Edge{1, 0});
	
	while(!pq.empty()){
		int pos = pq.top().v;
		int cost = pq.top().w;
		pq.pop();
		if(ch[pos] == 0){
			answer += cost;
			ch[pos] = 1;
			for(int i=0; i<matrix[pos].size(); i++){
				pq.push(Edge{matrix[pos][i].first, matrix[pos][i].second});
			}
		}
	}
	cout << answer;
	return 0;
}
