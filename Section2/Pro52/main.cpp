#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int minOfThree(int &a, int &b, int &c){
	int min;
	if(a<=b) min = a;
	else min = b;
	if(c<=min) min = c;
	
	return min;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	 
	vector<int> ugly(n, 1);
	int p2=0, p3=0, p5=0;
	
	for(int i=1; i<n; i++){
		int two = ugly[p2]*2;
		int three = ugly[p3]*3;
		int five = ugly[p5]*5;
		int min = minOfThree(two, three, five);
		
		ugly[i] = min;
		
		if(min == two) p2++;
		if(min == three) p3++;
		if(min == five) p5++;
	}
	
	cout << ugly[n-1];
	
	return 0;
}
