#include <iostream>
#include <vector>

using namespace std;

void recall(int n){
	if(n == 0) return;
	else{
		
		recall(n-1);
		cout << n << " ";
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	recall(n);
	
	return 0;
}
