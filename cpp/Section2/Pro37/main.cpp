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
		int count = 0;
		for(int j=0; j<s; j++){
			if(m != cache[j])
				count++;
			// HIT
			else{
				int hit = cache[j];
				int l;
				for(l=j-1; l>=0; l--)
					cache[l+1] = cache[l];				
				cache[l+1] = hit;
				break;
			}
		}
		// MISS -> LRU
		if(count == s){
			int k;
			for(k=s-2; k>=0; k--)
				cache[k+1] = cache[k];
			cache[k+1] = m;
		}
	}
	
	for(auto & ele : cache)
		printf("%d ", ele);
	 
	return 0;
}
