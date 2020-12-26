#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<vector<int> > arr(n, vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	return 0;
}
