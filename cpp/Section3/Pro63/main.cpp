#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	
	vector<vector<int> > matrix(n, vector<int> (n));
	
	for(int i=0; i<m; i++){
		int r, c, w;
		scanf("%d %d %d", &r, &c, &w);
		matrix[r-1][c-1] = w;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
