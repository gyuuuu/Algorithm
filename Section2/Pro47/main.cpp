#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	int** arr = new int*[n];
	for(int i=0; i<n; i++){
		arr[i] = new int[n];
		for(int j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int m, up, down, right, left; 
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m = arr[i][j];
			
			if(i != 0) up = arr[i-1][j];
			else up = 0;
			
			if(i != n-1) down = arr[i+1][j];
			else down = 0;
			
			if(j != n-1) right = arr[i][j+1];
			else right = 0;
			
			if(j != 0) left = arr[i][j-1];
			else left = 0;
			
			if((m>up) && (m>down) && (m>left) && (m>right)) cnt++;
		}
	}
	
	printf("%d", cnt);
	
//	// 2차원 배열 출력 (디버깅)
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
	return 0;
}
