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
	
	// '1'�� ������ ���� ���� �� �̱� ������ �� ���� ���� �ε����� �ȴ�. 
	int idx = arr[0];
	result[idx] = 1;
	
	int count; //�տ� �ڽź��� ū���� �� �� 
	for(int i=1; i<n; i++){
		if(arr[i] < arr[i-1]){
			count = 0;
			for(int j=0; j<idx; j++){
				if(result[j] == 0){ // result�� ���Ұ� 0�̶�� ���� ���� ä������ �ʾҴٴ°� 
					if(count == arr[i]){ // ���ǿ� �´ٸ� ���� �� �ڸ� 
						idx = j;
						result[idx] = i+1;
						break;
					}
					else count++; // -> 1���� ���ʴ�� ä������ �����̱⶧���� �ڱ⺸�� ū ����� �ǹ� 
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
