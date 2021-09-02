#include <iostream>
#include <stdio.h>

using namespace std;

// 가위:1 바위:2 보:3 
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	int * ptr_a = new int[n];
	int * ptr_b = new int[n];
	
	for(int i=0; i<n; i++)
		scanf("%d", &ptr_a[i]);
	
	for(int i=0; i<n; i++)
		scanf("%d", &ptr_b[i]);
	
	for(int i=0; i<n; i++){
		if(ptr_a[i] == ptr_b[i])
			printf("D\n"); 
		else{
			if(ptr_a[i] == 1){
				if(ptr_b[i] == 2)
					printf("B\n");
				else
					printf("A\n");
			}
			else if(ptr_a[i] == 2){
				if(ptr_b[i] == 1)
					printf("A\n");
				else
					printf("B\n");
			}
			else{
				if(ptr_b[i] == 1)
					printf("B\n");
				else
					printf("A\n");
			}
		}
	}
	delete[] ptr_a;
	delete[] ptr_b;
	
	return 0;
}
