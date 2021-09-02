#include <iostream>
#include <vector>
#include <string>

using namespace std;

int binary(int n){

	if(n > 0){
		binary(n/2);
		cout << n%2;
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	binary(n);
	return 0;
}
