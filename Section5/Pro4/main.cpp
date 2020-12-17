#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(auto &ele : arr){
		cout << ele << " ";
	}
	
	return 0;
}
