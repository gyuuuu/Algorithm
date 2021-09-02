#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, result=0;
	scanf("%d", &n);
	vector<vector<int> > arr(n, vector<int>(n));
	int front, right;
	
	for(int i=0; i<n; i++){
		scanf("%d", &front);
		for(int j=0; j<n; j++){
			arr[j][i] = front;
		}
	}
	
	for(int i=0; i<n; i++){
		scanf("%d", &right);
		for(int j=0; j<n; j++){
			if(arr[n-1-i][j] > right){
				arr[n-1-i][j] = right;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			result += arr[i][j];
		}
	}
	
	cout << result;
	
	return 0;
}
