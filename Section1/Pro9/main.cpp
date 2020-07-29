#include <iostream>

using namespace std;

int main() {
	unsigned int input;
	int cnt[50001] = {0, };
	cin >> input;
	
	for(int i=1; i<=input; i++){
		for(int j=i; j<=input; j+=i){
			cnt[j]++;
		}
	}
	
	for(int i=1; i<=input; i++)
		cout << cnt[i] << " ";
	
	return 0;
}
