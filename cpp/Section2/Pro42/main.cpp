#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	sort(arr.begin(), arr.end());
	
	int lt = 0, rt = n-1;
	int mid;
	while(1){
		mid = (lt+rt)/2;
		if(arr[mid] > m)
			rt = mid-1;
		else if(arr[mid] < m)
			lt = mid+1;
		else break;
	}
	printf("%d", mid+1);
	
	return 0;
}
