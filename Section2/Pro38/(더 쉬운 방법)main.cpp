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
	
	// ū ������ �ֱ� 
	// ������ �ڿ� ���� ���� �ڽź��� ���� �� �̱⶧���� 
	// �̸� �����ִ� (�ڽź��� ū)���鸸 count�� ��ŭ �о��ָ� �ȴ�. 
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
