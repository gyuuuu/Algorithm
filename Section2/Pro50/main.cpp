#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int r, c, h, w, result=0;
int ** arr;

int territory(int row, int col){
	int sum = 0;
	for(int i=row; i<row+h; i++){
		for(int j=col; j<col+w; j++){
			sum += arr[i][j];
		}
	}
	//printf("%d\n", sum);
	return sum;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &r, &c);	
	
	arr = new int*[r];         
	for(int i = 0; i<r; i++)
		arr[i] = new int[c]; 

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			scanf("%d", &arr[i][j]);
	}
	scanf("%d %d", &h, &w);
	
	
	//µð¹ö±ë¿ë 
//	for(int i=0; i<r; i++){
//		for(int j=0; j<c; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
	
	
	for(int i=0; i<r-h+1; i++){
		for(int j=0; j<c-w+1; j++){
			int tmp = territory(i,j);
			if(tmp > result) result = tmp;
		}
	}
	
	cout << result;
	
	return 0;
}
