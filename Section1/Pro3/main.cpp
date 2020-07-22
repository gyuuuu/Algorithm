#include <iostream>

using namespace std;

int main() {
	
	int n;
	int sum = 0;
	int count = 0;
	int c = 0;
	
	cin >> n;
	
	for(int i=1; i<n; i++)
		if(n%i == 0)
			count++;
	
	
	for(int i=1; i<n; i++){
		if(n%i == 0){
			cout << i << " ";
			sum += i;
			c++;
			if(c < count)
				cout  << "+ ";
			else
				cout << "= ";
		}
	}
	cout << sum;
	
	return 0;
}
