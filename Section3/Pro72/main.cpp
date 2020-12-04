#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	queue<int> Q;
	for(int i=1; i<=n; i++){
		Q.push(i);
	}
	
	while(Q.size() != 1){
		for(int i=0; i<k-1; i++){
			int x = Q.front();
			Q.pop();
			Q.push(x);
		}
		Q.pop();
	}
	cout << Q.front();
	return 0;
}
