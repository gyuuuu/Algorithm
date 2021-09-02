#include <iostream>

using namespace std;

int main() {
	int input, result;
	
	cin >> input;
	if(input < 10){
		result = input;
	}
	else if(input < 100){
		result = (input-10+1)*2 + 9;
	}
	else if(input < 1000){
		result = (input-100+1)*3 + (99-10+1)*2 + 9;
	}
	else if(input < 10000){
		result = (input-1000+1)*4 + (999-100+1)*3 + (99-10+1)*2 + 9;
	}
	else if(input < 100000){
		result = (input-10000+1)*5 + (9999-1000+1)*4 + (999-100+1)*3 + (99-10+1)*2 + 9;
	}
	
	cout << result;
	return 0;
}
