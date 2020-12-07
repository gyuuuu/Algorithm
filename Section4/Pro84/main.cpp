#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

vector<pair<int, int> > schedule(20);

int max_earn = 0;

void DFS(int s, int e, int earn, vector<pair<int, int> > & sche){
	if(s-1 >= e){
		max_earn = max(max_earn, earn);
	}
	else{
		DFS(s+1, e, earn, sche);
		if(s + sche[s].first-1 <= e){
			DFS(s + sche[s].first, e, earn+sche[s].second, sche);
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		schedule[i] = make_pair(a, b);
	}
	
	int earn = 0;
	DFS(1, n, earn, schedule);
	
	cout << max_earn;
	return 0;
}
