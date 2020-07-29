#include <iostream>
#include <stdio.h>

using namespace std;

int digit_sum(int x);

int main() {
	int num;
	int arr[100];
	int digitSum[100];
	scanf("%d", &num);
	
	for(int i=0; i<num; i++)
		scanf("%d", &arr[i]);
		
	for(int i=0; i<num; i++)
		digitSum[i] = digit_sum(arr[i]);
		
	for(int i=0; i<num; i++)
		cout << digitSum[i] << " ";
	
	return 0;
}

int digit_sum(int x){
	int sum = 0;
	while( x >= 1 ){
		sum += x%10;
		x /= 10;
	}
	return sum;
}
