#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


//연속된 자연수눈 a, a+1, a+2, ... 이런식으로 표현 가능 
//ex 15 = a + a+1 --> 2a+1 --> 2로 나누었을 때 나머지가 1
//ex 15 = a + a+1 + a+2 --> 3a+3 3으로 나누었을 때 나머지가 3 즉, 0
// -> 자연수 n을 연속된 자연수로 표현했을 때 n을 a의 계수로 나눈 나머지가 상수항이면 표현가능. 
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	int cnt = 0;
	scanf("%d", &n);
	
	int k = 1; // 나머지 
	int l = 2; // 나머지에 더할 수 
	for(int i=2; i<n; i++){
		if( (n%i) == (k%i) ){ // 표현 가능 
			int mid = n/i;
			int idx = i/2;
			
			if(i%2 == 0) idx--; // 짝수개일 경우
			
			if(mid-idx <= 0) break; //ex 15 = a + a+1 + a+2 ... 일때 a가 0이하 이면 탈출 (문제에서 자연수의 합으로 표현하라고 함)
			
			printf("%d", mid-idx);
			for(int j=1; j<i; j++){
				printf(" + %d", mid-idx+j);
			}
			printf(" = %d\n", n);
			cnt++;
		}
		k += l;
		l++;
	}
	printf("%d", cnt);
	
	return 0;
}
