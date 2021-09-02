#include <iostream>

using namespace std;

int main() {
	
	char input[30];
	int count = 0;
	
	cin >> input;
	
	for(auto &ele : input){
		if(ele == '(')
			count++;
		else if(ele == ')')
			count--;
		if(count < 0){
			cout << "NO";
			return 0;
		}
	}
	
	if(count == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
