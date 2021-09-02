#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	
	int m_idx = 0;
	for(int i=0; i<n; i++){
		if(arr[i] < 0){
			int tmp = arr[i];
			//한칸씩 뒤로 밀기 
			for(int j=i-1; j>=m_idx; j--){
				arr[j+1] = arr[j];
			}
			arr[m_idx] = tmp;
			m_idx++;
		}
	}
	
	for(auto & ele : arr)
		printf("%d ", ele);
	printf("\n");
	
	return 0;
}
