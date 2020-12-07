#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> vertex(101);

struct G{
	int u, v, w;
	
	bool operator <(G const &other) const{
		return w > other.w;
	}
};

int Find(int v){
	if(v == vertex[v]) return v;
	else{
		return vertex[v] = Find(vertex[v]);
	}
}

void Union(int u, int v){
	u = Find(u);
	v = Find(v);
	vertex[u] = v;
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int num_v, num_e;
	scanf("%d %d", &num_v, &num_e);
	
	priority_queue<G> pq;
	for(int i=0; i<num_e; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		pq.push(G{a, b, c});
	}
	
	for(int i=1; i<=num_v; i++){
		vertex[i] = i;
	}
	
	int cost = 0;
	int cnt = 0;
	while(cnt != num_v-1){
		int u = pq.top().u;
		int v = pq.top().v;
		if(Find(u) != Find(v)){
			Union(u,v);
			cost += pq.top().w;
			cnt++;
		}
		pq.pop();
	}
	
	cout << cost;
	return 0;
}
