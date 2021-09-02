#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int Q[100], front=-1, back=-1, ch[10];
vector<int> matrix[10];

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int a, b;
	for(int i=0; i<6; i++){
		scanf("%d %d", &a, &b);
		matrix[a].push_back(b);
		matrix[b].push_back(a);
	}
	Q[++back] = 1;
	ch[1] = 1;
	while(front<back){
		int x = Q[++front];
		cout << x << " ";
		for(int i=0; i<matrix[x].size(); i++){
			if(ch[matrix[x][i]] == 0){
				ch[matrix[x][i]] = 1;
				Q[++back] = matrix[x][i];
			}
		}
	}
	return 0;
}
