#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//결정알고리즘 - 답을 정해놓고 이 답이 맞는지 확인해가는 알고리즘
//DVD 최소 용량을 정해놓고, 그게 맞는지 확인해감 

int arr[1001], n;

int Count(int s){
	int sum = 0, count = 1;
	for(int i=0; i<n; i++){
		if(sum+arr[i] > s){
			count++;
			sum = arr[i];
		}
		else
			sum += arr[i];
	}
	return count;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int m;
	scanf("%d %d", &n, &m);
	
	int min = 1, max = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		max += arr[i];
	}
	
	int result, mid;
	while(min <= max){
		mid = (min+max) / 2;
		if(Count(mid) <= m){
			result = mid;
			max = mid - 1;
		}
		else min = mid+1;
	}
	
	printf("%d", result);
	
	return 0;
}
