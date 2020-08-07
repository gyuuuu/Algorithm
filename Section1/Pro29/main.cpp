#include <iostream>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	int count = 0;
	for(int i=1; i<=n; i++){
		int tmp = i;
		while(tmp > 0){
			if(tmp%10 == 3){
				count++;
			}
			tmp /= 10;
		}
	}
	
	cout << count;
	return 0;
}
