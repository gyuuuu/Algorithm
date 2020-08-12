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
	
	// '1'은 무조건 제일 작은 수 이기 떄문에 그 원소 값이 인덱스가 된다. 
	int idx = arr[0];
	result[idx] = 1;
	
	int count; //앞에 자신보다 큰수의 갯 수 
	for(int i=1; i<n; i++){
		if(arr[i] < arr[i-1]){
			count = 0;
			for(int j=0; j<idx; j++){
				if(result[j] == 0){ // result의 원소가 0이라는 것은 아직 채워지지 않았다는것 
					if(count == arr[i]){ // 조건에 맞다면 내가 들어갈 자리 
						idx = j;
						result[idx] = i+1;
						break;
					}
					else count++; // -> 1부터 차례대로 채워지는 순서이기때문에 자기보다 큰 수라는 의미 
				}
			}
		}
		else if(arr[i] > arr[i-1]){
			count = arr[i-1];
			for(int j=idx+1; j<n; j++){
				if(result[j] == 0){
					if(count == arr[i]){
						idx = j;
						result[idx] = i+1;
						break;
					}
					else count++;
				}
			}
		}
		else{
			count = 0;
			for(int j=0; j<n; j++){
				if(result[j] == 0){
					if(count == arr[i]){
						idx = j;
						result[idx] = i+1;
						break;
					}
					else count++;
				}
			}
		}
	}
	
	for(auto & ele : result)
		printf("%d ", ele);
	
	return 0;
}
