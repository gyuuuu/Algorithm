#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > matrix(21, vector<int>(21));
vector<vector<int> > dy(21, vector<int>(21));

int DFS(int r, int c){
	if(dy[r][c] != 0) return dy[r][c];
	if(r==0 && c==0) return matrix[0][0];
	else{
		if(r == 0){
			return dy[r][c] = matrix[r][c] + DFS(r, c-1);
		}
		else if(c == 0){
			return dy[r][c] = matrix[r][c] + DFS(r-1, c);
		}
		else return dy[r][c] = matrix[r][c] + min(DFS(r-1, c), DFS(r, c-1));
	}
}

int main(int argc, char** argv) {
//	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
//	vector<vector<int> > matrix(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> matrix[i][j];
		}
	}
	cout << DFS(n-1, n-1);
	return 0;
}
