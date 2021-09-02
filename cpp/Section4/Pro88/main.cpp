#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int map[7][7];
vector<vector<int> >ch(7, vector<int>(7));
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int answer = -1;
	for(int i=0; i<7; i++){
		for(int j=0; j<7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	queue<pair<int, int> >Q;
	Q.push(make_pair(0,0));
	ch[0][0] = 1;
	while(!Q.empty()){
		int r = Q.front().first;
		int c = Q.front().second;
		Q.pop();
		for(int i=0; i<4; i++){
			int rr = r+dr[i];
			int cc = c+dc[i];
			if(rr==6 && cc==6){
				answer = ch[r][c];
				goto A;
			}
			if(rr<0 || cc<0 || rr>=7 || cc>=7) continue;
			if(map[rr][cc] == 1) continue;
			if(ch[rr][cc] == 0){
				ch[rr][cc] = ch[r][c] + 1;
				Q.push(make_pair(rr,cc));
			}
		}
	}
A:	cout << answer;
	return 0;
}
