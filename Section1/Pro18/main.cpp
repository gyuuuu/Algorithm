#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, M, result=0, c=0;
	scanf("%d %d", &n, &M);
	
	for(int i=0; i<n; i++){
		int m;
		scanf("%d", &m);
		
		if(m > M){
			c++;
			if(result < c)
				result = c;
		}
		else
			c = 0;
	}
	printf("%d", result);
	return 0;
}
