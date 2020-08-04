#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, pre, now;
	cin >> n;
	
	vector<int> jumper(n);
	
	scanf("%d", &pre);
	
	for(int i=1; i<n; i++){
		scanf("%d", &now);
		int index = abs(pre-now);
		if(index>=1 && index <= n-1){
			if(jumper[index] == 0){
				jumper[index]++;
				pre = now;
			}
			else{
				printf("NO");
				return 0;
			}
		}
		else{
			printf("NO");
			return 0;
		}
	}
	
	printf("YES");
	
	return 0;
}
