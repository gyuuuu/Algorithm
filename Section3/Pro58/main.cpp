#include <iostream>
#include <algorithm>

using namespace std;

void D(int v){
	if(v > 7) return;
	else{
		//cout << v << " ";
		D(2*v);
		//cout << v << " ";
		D(2*v+1);
		//cout << v << " ";
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	D(1);
	return 0;
}
