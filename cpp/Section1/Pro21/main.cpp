#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int a[10], b[10];
	char lastWin = '\0';
	int a_score = 0, b_score = 0;
	
	for(int i=0; i<10; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<10; i++)
		scanf("%d", &b[i]);
		
	for(int i=0; i<10; i++){
		if(a[i] > b[i]){
			a_score += 3;
			lastWin = 'A';
		}
		else if(a[i] < b[i]){
			b_score += 3;
			lastWin = 'B';
		}
		else{
			a_score++;
			b_score++;
		}
	}
	
	printf("%d %d\n", a_score, b_score);
	
	int c = 0;
	if(a_score > b_score)
		printf("A");
	else if(a_score < b_score)
		printf("B");
	else{
		if(lastWin != '\0')
			printf("%c", lastWin);
		else
			printf("D");
	}
	
	
	return 0;
}
