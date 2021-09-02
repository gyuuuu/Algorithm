#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	double r_sum=0;
	int avgs[9];
	int arr[9][9];
	for(int i=0; i<9; i++){
		r_sum = 0;
		for(int j=0; j<9; j++){
			scanf("%d", &arr[i][j]);
			r_sum += arr[i][j];
		}
		avgs[i] = round(r_sum/9); // -> avgs[i] = (r_sum+9.0)+0.5 도 가능 --> 실수를 int에 넣을 때 소수점은 버려지는 것을 이용 
	}
	
	int c_idx;
	for(int i=0; i<9; i++){
		int avg = avgs[i];
		int min_diff = 21700000;
		for(int j=0; j<9; j++){
			int diff = abs(avg-arr[i][j]);
			if(diff < min_diff){
				min_diff = diff;
				c_idx = j;
			}
			else if(diff == min_diff){
				if(arr[i][j] > arr[i][c_idx]){
					c_idx = j;
				}
			}
		}
		printf("%d %d\n", avg, arr[i][c_idx]);
	}
	
	return 0;
}
