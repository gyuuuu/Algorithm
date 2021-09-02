#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k, result;
	scanf("%d %d", &n, &k);
	vector<int> arr(n);
	
	int idx = 0, count = 0, f = 0;;
	while(1){
		if(arr[idx] == 0) count++;
		if(count == k){
			count = 0;
			arr[idx] = 1;
			f++;
		}
		if(f == n-1) break;
		idx++;
		if(idx == n) idx = 0;
	}
	
	for(int i=0; i<n; i++){
		if(arr[i] == 0){
			printf("%d", i+1);
			break;
		}
	}
	
	return 0;
}
