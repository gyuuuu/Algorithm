#include <iostream>
#include <stdio.h>

using namespace std;

int reverse(int x);
bool isPrime(int x);

int main() {
	int n, num;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		int rev = reverse(num);
		//cout << rev << " ";
		if(isPrime(rev))
			printf("%d ", rev);
	}
	return 0;
}

int reverse(int x){
	int r = 0;
	
	while(x>0){
		int tmp = x%10;
		r = r*10 + tmp;
		x /= 10;
	}
	
	return r;
}

bool isPrime(int x){
	int count = 0;
	bool flag = true;
	
	if(x == 1)
		return false;
	
	for(int i=2; i<x; i++){
		if(x%i == 0){
			flag = false;
			break;
		}
	}
	
	return flag;
}
