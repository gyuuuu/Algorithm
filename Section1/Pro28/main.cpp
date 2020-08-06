#include <stdio.h>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, output;
	int two = 1, five = 1;
	scanf("%d", &n);
	
	for(int i=10; i<=n; i++){
		int tmp = i;
		while(tmp%2 == 0){
			two++;
			tmp /= 2;
		}
		while(tmp%5 == 0){
			five++;
			tmp /= 5;
		}
	}
	
	output = (two <= five) ? two : five;
	
	printf("%d", output);
	
	return 0;
}
