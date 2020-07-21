#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	int sum = 0;
	
	cin >> n1 >> n2;
	
	while(n1 <= n2){
		cout << n1 << " ";
		sum += n1;
		if(n1 == n2)
			cout << "= ";
		else
			cout << "+";
		n1++;
	}
	cout << sum;
	return 0;
}
