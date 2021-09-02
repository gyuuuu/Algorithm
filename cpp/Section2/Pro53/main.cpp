#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int stack[1000];
int top = -1;

void push(int a){
	stack[++top] = a;
}

int pop(){
	return stack[top--];
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k;
	scanf("%d %d", &n, &k);

	while(1){;
		push(n%k);
		n /= k;
		if(n == 0) break;
	}
	
	// A = 65
	while(1){
		int num = pop();
		if(num>=10){
			printf("%c", 65+num-10);
		}
		else{
			printf("%d", num);
		}
		if(top<0) break;
	}
	
	return 0;
}
