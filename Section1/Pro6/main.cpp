#include <iostream>
#include <cctype>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	string input;
	char num[1024];
	int number;
	
	cin >> input;
	
	int numIndex = 0;
	for(int i=0; i<input.length(); i++){
		if( (input.at(i) >= 48 )&& (input.at(i) <= 57) ){
			num[numIndex] = input.at(i);
			numIndex++;
		}
	}
	
	int expo = numIndex -1;
	for(int i=0; i<numIndex; i++){
		number += (num[i]-48) * pow(10, expo);
		expo--;
	}
	
	cout << number << endl;
	
	int count = 2;
	for(int i=2; i<number; i++){
		if(number % i == 0)
			count++;
	}
	
	cout << count;
	
	return 0;
}
