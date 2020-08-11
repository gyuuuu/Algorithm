#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	for(int i=1; i<n; i++){
		int tmp = arr[i];
		int j;
		for(j=i-1; j>=0; j--){
			if(arr[j] > tmp){
				arr[j+1] = arr[j];
			}
			else	break;
		}
		arr[j+1] = tmp;
	}
	
	for(auto & ele : arr)
		printf("%d ", ele);
	
	return 0;
}
