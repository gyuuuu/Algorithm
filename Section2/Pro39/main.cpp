#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, m;
	int s=0;
	scanf("%d", &n);
	vector<int> arr1(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr1[i]);
		
	scanf("%d", &m);
	vector<int> arr2(m);
	for(int i=0; i<m; i++)
		scanf("%d", &arr2[i]);
	
	s = n + m;
	
	vector<int> result(s);
	int a1 = 0, a2 = 0;
	int result_idx = 0;
	while(a1<n && a2<m){
		if(arr1[a1] >= arr2[a2]){
			result[result_idx] = arr2[a2];
			a2++;
			result_idx++;
		}
		else if(arr1[a1] < arr2[a2]){
			result[result_idx] = arr1[a1];
			a1++;
			result_idx++;
		}
	}
	
	while(a2 < m){
		result[result_idx] = arr2[a2];
		a2++;
		result_idx++;
	}	
			
	while(a1 < n){
		result[result_idx] = arr1[a1];
		a1++;
		result_idx++;
	}
	
	for(auto & ele : result)
		printf("%d ", ele);
	return 0;
}
