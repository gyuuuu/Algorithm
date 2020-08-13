#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n,m;
	
	scanf("%d", &n);
	vector<int> arr1(n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr1[i]);
	sort(arr1.begin(), arr1.end()); // algorithm에있음 quick정렬 기본 오름차순 정렬 
	
	scanf("%d", &m);
	vector<int> arr2(m);
	for(int i=0; i<m; i++)
		scanf("%d", &arr2[i]);
	sort(arr2.begin(), arr2.end());
	
	vector<int> result(n+m);
	
	int p1 = 0, p2 = 0, r_p = 0;
	while(p1<n && p2<m){
		if(arr1[p1] > arr2[p2]){
			p2++;
		}
		else if(arr1[p1] < arr2[p2]){
			p1++;
		}
		else{
			result[r_p] = arr1[p1];
			p1++;
			p2++;
			r_p++;
		}
	}
	
	for(int i=0; i<r_p; i++)
		printf("%d ", result[i]);
		
	return 0;
}
