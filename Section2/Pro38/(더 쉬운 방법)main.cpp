#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	vector<int> result(n);
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	// 큰 수부터 넣기 
	// 어차피 뒤에 들어올 수는 자신보다 작은 수 이기때문에 
	// 미리 들어와있는 (자신보다 큰)수들만 count수 만큼 밀어주면 된다. 
	for(int i=n-1; i>=0; i--){
		int count = arr[i];
		int j;
		for(j=i; j<i+count; j++)
			result[j] = result[j+1];
		result[j] = i+1;
	}
	
	for(auto & ele : result)
		printf("%d ", ele);
	
	return 0;
}
