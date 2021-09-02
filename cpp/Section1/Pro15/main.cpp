#include <iostream>

using namespace std;

int main() {
	int input, result;
	cin >> input;
	
	for(int i=2; i<=input; i++){
		int flag = 1;
		for(int j=2; j*j<=i; j++){
			if(i%j == 0){
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			result++;
	}
	
	cout << result;
	return 0;
}
