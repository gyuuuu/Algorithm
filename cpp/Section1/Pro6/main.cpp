#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	string input;
	int number = 0;
	
	//cin >> input;
	getline(cin, input);
	
	int numIndex = 0;
	for(int i=0; i<input.length(); i++){
		if( (input.at(i) >= 48 )&& (input.at(i) <= 57) ){
			number = number*10 + (input.at(i)-48);
		}
	}

	//cout << number << endl;
	printf("%d\n", number);
	
	int count = 2;
	for(int i=2; i<number; i++){
		if(number % i == 0)
			count++;
	}
	
	//cout << count;
	printf("%d", count);
	
	return 0;
}
