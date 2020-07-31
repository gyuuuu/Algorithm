#include <iostream>
#include <stdio.h>

using namespace std;

int sum_n(int n);

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, num, sum, answer;
	cin >> n;
	
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		scanf("%d", &sum);
		
		answer = sum_n(num);
		
		if(answer == sum)
			printf("%s\n", "YES");
		else
			printf("%s\n", "NO");
	}
	return 0;
}

int sum_n(int n){
	int sum = 0;
	
	for(int i=1; i<=n; i++)
		sum += i;
	
	return sum;
}
