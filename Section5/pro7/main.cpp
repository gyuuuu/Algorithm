#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<vector<int> > matrix(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> matrix[i][j];
		}
	}
	
	return 0;
}
