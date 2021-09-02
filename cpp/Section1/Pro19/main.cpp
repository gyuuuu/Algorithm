#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n;
	cin >> n;
	int result = 0;
	
	int *students = new int[n];
	for(int i=0; i<n; i++)
		scanf("%d", &students[i]);
		
//	for(int i=0; i<n-1; i++){
//		for(int j=i+1; j<n; j++){
//			if(students[i] <= students[j]){
//				result--;
//				break;
//			}
//		}
//	}
	
	int max = students[n-1];
	for(int i=n-2; i>=0; i--){
		if(max < students[i]){
			result++;
			max = students[i];
		}
	}
	
	cout << result;
	delete[] students;
	
	return 0;
}
