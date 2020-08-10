#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(int i=0; i<n-1; i++){
		int max_index = i;
		for(int j=i+1; j<n; j++){
			if(arr[max_index] < arr[j])
				max_index = j;
		}
		swap(arr[i], arr[max_index]);
	}
	
	int pre = arr[0];
	int grade = 1;
	for(int i=1; i<n; i++){
		if(arr[i] == pre)
			continue;
		else{
			grade++;
			pre = arr[i];
		}
		if(grade == 3){
			printf("%d", pre);
			break;
		}
	}
	return 0;
}

void swap(int & x, int & y){
	int tmp = x;
	x = y;
	y = tmp;
}
