#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}; 
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n, cnt=0;
	scanf("%d", &n);
	vector<vector<int> >map(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &map[i][j]);
		}
	}
	queue<pair<int, int> >Q;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(map[i][j] == 1){
				Q.push(make_pair(i,j));
				//map[i][j] = 0;
				while(!Q.empty()){
					int r = Q.front().first;
					int c = Q.front().second;
					Q.pop();
					for(int k=0; k<8; k++){
						int rr = r+dx[k];
						int cc = c+dy[k];
						if(rr<0 || cc<0 || rr>=n || cc>=n) continue;
						if(map[rr][cc] == 1){
							Q.push(make_pair(rr, cc));
							map[rr][cc] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
