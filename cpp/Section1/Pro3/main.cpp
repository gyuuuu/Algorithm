#include <iostream>

using namespace std;

int main() {
	
	int n;
	int sum = 1;

	
	cin >> n;
	
//	for(int i=1; i<n; i++)
//		if(n%i == 0)
//			count++;
	
	cout << "1 ";
	
	for(int i=2; i<n; i++){
		if(n%i == 0){
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;
	
	return 0;
}
