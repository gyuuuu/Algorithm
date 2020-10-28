#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector<vector<int> > matrix(9, vector<int>(9,1));
vector<vector<int> > path(9, vector<int>(9,0));
int cnt = 0;

void DFS(int r, int c){
	if(r==7 && c==7){
		cnt++;
	}
	else{
		if(matrix[r-1][c] == 0 && path[r-1][c] == 0){
			path[r-1][c] = 1;
			DFS(r-1, c);
			path[r-1][c] = 0;
		}
		if(matrix[r][c+1] == 0 && path[r][c+1] == 0){
			path[r][c+1] = 1;
			DFS(r, c+1);
			path[r][c+1] = 0;
		}
		if(matrix[r+1][c] == 0 && path[r+1][c] == 0){
			path[r+1][c] = 1;
			DFS(r+1, c);
			path[r+1][c] = 0;
		}
		if(matrix[r][c-1] == 0 && path[r][c-1] == 0){
			path[r][c-1] = 1;
			DFS(r, c-1);
			path[r][c-1] = 0;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	
	for(int i=1; i<8; i++){
		for(int j=1; j<8; j++){
			int d;
			scanf("%d", &d);
			matrix[i][j] = d;
		}
	}
	
	path[1][1] = 1;
	DFS(1,1);
	
	cout << cnt;
	
//	for(int i=0; i<9; i++){
//		for(int j=0; j<9; j++){
//			cout << matrix[i][j] << " ";
//		}
//		cout << "\n";
//	}
	
	return 0;
}
