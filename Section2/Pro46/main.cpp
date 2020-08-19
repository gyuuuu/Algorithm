#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("in3.txt", "rt", stdin);
	int n, k;
	cin >> n;
	vector<int> schedule(n);
	int sum = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &schedule[i]);
		sum += schedule[i];
	}
	cin >> k;
	
	if(sum <= k){
		printf("-1");
		return 0;
	}
	
	int idx = 0, c = 0;
	for(int i=0; i<k; i++){
		if(schedule[idx] > 0){
			schedule[idx]--;
		}
		else{
			i--;
		}
		idx++;
		if(idx == n) idx = 0;
	}
	
	for(int i=idx; ;){
		if(schedule[i] > 0){
			printf("%d", i+1);
			break;
		}
		i++;
		if(i == n) i = 0;
	}
	
	return 0;
}
