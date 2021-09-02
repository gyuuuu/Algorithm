#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	priority_queue<pair<int, int> > pq;
	
	int max_d = 0;
	for(int i=0; i<n; i++){
		int m, d;
		scanf("%d %d", &m, &d);
		pq.push(make_pair(m, d));
		max_d = max(max_d, d);
	}
	vector<int> schedule(max_d+1);
	
	while(!pq.empty()){
		pair<int, int> x = pq.top();
		pq.pop();
		for(int i=x.second; i>0; i--){
			if(schedule[i] == 0){
				schedule[i] = x.first;
				break;
			}
		}
	}
	
	int sum = 0;
	for(auto ele : schedule){
		sum += ele;
	}
	cout << sum;
	return 0;
}
