#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//�����˰��� - ���� ���س��� �� ���� �´��� Ȯ���ذ��� �˰���
//DVD �ּ� �뷮�� ���س���, �װ� �´��� Ȯ���ذ� 

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
