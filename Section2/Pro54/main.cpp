#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char str[100];
	stack<char> s;
	scanf("%s", &str);
	
	for(int i=0; str[i]!='\0'; i++){
		if(str[i] == '(') s.push(str[i]);
		else {
			if(s.empty()){
				cout << "NO";
				return 0;
			}
			else s.pop();
		}
	}
	
	if(s.empty()) cout << "YES";
	else cout << "NO";
	
	return 0;
}
