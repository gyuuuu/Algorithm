#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n,k, result;
	int max = -24700000;
	int sum=0;
	scanf("%d %d", &n, &k);
	
	vector<int> tem(n);
	int c = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &tem[i]);
		if(c<k){
			sum += tem[i];
			c++;
		}
		else{
			if(max < sum)
				max = sum;
			sum -= tem[i-k];
			sum += tem[i];
		}
	}
	
	result = (sum>max) ? sum : max;
	cout << result;
	
	return 0;
}
