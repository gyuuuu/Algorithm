#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char input[100];
	int result;
	int count[10] = {0,};
	scanf("%s", &input);

	for(int i=0; input[i] != '\0'; i++){
		int index = (int)(input[i]-48);
		count[index]++;
	}
	
	int max = 0;
	for(int i=0; i<10; i++){
		if(max <= count[i]){
			max = count[i];
			result = i;
		}
	}
	cout << result;
	return 0;
}
