#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int r, c, h, w;
	scanf("%d %d", &r, &c);	
	vector<vector<int> > arr(r+1, vector<int>(c+1));
	vector<vector<int> > dy(r+1, vector<int>(c+1));
	
	// dy배열 : i행 j열까지의 누적합 배열 
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			scanf("%d", &arr[i][j]);
			dy[i][j] = dy[i][j-1] + dy[i-1][j] - dy[i-1][j-1] + arr[i][j];
		}
	}
	scanf("%d %d", &h, &w);
	
//	for(int i=1; i<=r; i++){
//		for(int j=1; j<=c; j++)
//			printf("%d ", dy[i][j]);
//		printf("\n");
//	}
	
	int max = 0;
	for(int i=h; i<=r; i++){
		for(int j=w; j<=c; j++){
			int tmp = dy[i][j] - dy[i-h][j] - dy[i][j-w] + dy[i-h][j-w];
			if (tmp > max) max = tmp;
		}
	}

	cout << max << endl;
	
	return 0;
}
