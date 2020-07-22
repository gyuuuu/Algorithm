#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	int* ageptr = new int[n];
	
	for(int i=0; i<n; i++){
		cin >> ageptr[i];
	}
	
	int min = ageptr[0];
	int max = ageptr[0];
		
	for(int i=0; i<n; i++){
		if(ageptr[i] > max)
			max = ageptr[i];
		if(ageptr[i] < min)
			min = ageptr[i];
	}
	
	cout << max-min;
	
	return 0;
}
