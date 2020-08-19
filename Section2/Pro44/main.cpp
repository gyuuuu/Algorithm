#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool okay(int& m, int &c, vector<int>& arr);
//결정알고리즘 
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, c, result;
	scanf("%d %d", &n, &c);
	vector<int> arr(n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr.begin(), arr.end());
	
	int lt = 1, rt = arr[n-1];
	int mid;
	while(lt <= rt){
		mid = (lt+rt) / 2;
		if(okay(mid, c, arr)){
			result = mid;
			lt = mid+1;
		}
		else rt = mid-1;
	}
	
	printf("%d", result);
	
	return 0;
}

bool okay(int& m, int &c, vector<int>& arr){
	int pos = arr[0];
	int count = 1;
	for(int i=1; i<arr.size(); i++){
		if(arr[i]-pos >= m){
			pos = arr[i];
			count++;
		}
	}
	
	return (count>=c) ? true : false;
}
