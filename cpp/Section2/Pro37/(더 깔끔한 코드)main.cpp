#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int s, n, m;
	scanf("%d %d", &s, &n);
	vector<int> cache(s);
	
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		int pos = -1;
		for(int j=0; j<s; j++){
			if(m == cache[j])
				pos = j;
		}
		// MISS -> LRU
		if(pos == -1){
			for(int j=s-1; j>=1; j--)
				cache[j] = cache[j-1];
		}
		else{
			for(int j=pos; j>=1; j--)
				cache[j] = cache[j-1];
		}
		cache[0] = m;
	}
	
	for(auto & ele : cache)
		printf("%d ", ele);
	 
	return 0;
}
