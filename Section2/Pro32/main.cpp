#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void swap(int & x, int & y);

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	for(int i=0; i<n-1; i++){
		int min = arr[i];
		int min_index = i;
		for(int j=i+1; j<n; j++){
			if(min > arr[j])
				min_index = j;
		}
		swap(arr[i], arr[min_index]);
	}
	
	for(auto & ele : arr)
		printf("%d ", ele);
	
	return 0;
}

void swap(int & x, int & y){
	int tmp = x;
	x = y;
	y = tmp;
}
