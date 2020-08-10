#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

inline void swap(int & x, int & y){
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
	
	for(auto & ele : arr)
		printf("%d ", ele);
	
	return 0;
}
