#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, m;
vector<pair<int, int> > house;
vector<pair<int, int> > pizza;
vector<pair<int, int> > ch(15);
int min_dist = INT_MAX;

int get_distance(pair<int,int> a, pair<int,int> b){
	return abs(a.first-b.first) + abs(a.second-b.second);
}

void DFS(int idx, int L){
	if(L == m){
		int dist = 0;
		for(auto & h : house){
			int h_dist = INT_MAX;
			for(auto &p : ch){
				h_dist = min(h_dist, get_distance(h,p));
			}
			dist += h_dist;
		}
		min_dist = min(min_dist, dist);
	}
	else{
		for(int i=idx; i<pizza.size(); i++){
			ch[L] = pizza[i];
			DFS(i+1, L+1);
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	vector<vector<int> > map(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int a;
			scanf("%d", &a);
			if(a == 1) house.push_back(make_pair(i, j));
			else if(a == 2) pizza.push_back(make_pair(i, j));
		}
	}
	
	DFS(0,0);
	
	cout << min_dist;
	return 0;
}
