#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	string input;
	string original = "";
	
	getline(cin, input);
	//cout << input;
	
	for(int i=0; i<input.length(); i++){
		if(input.at(i) == 32)
			continue;
		else{
			original += tolower(input.at(i));
		}
	}
	
	cout << original;
	return 0;
}
