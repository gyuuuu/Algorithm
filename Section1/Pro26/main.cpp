#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, p;
	scanf("%d", &n);
	
	vector<int> marathon(n);
	vector<int> result(n);
	for(int i=0; i<n; i++){
		int grade = i+1;
		scanf("%d", &p);
		for(int j=i-1; j>=0; j--){
			if(p > marathon[j])
				grade--;
		}
		marathon[i] = p;
		printf("%d ", grade);
	}
	
//	for(int i=0; i<n; i++)
//		printf("%d ", result[i]);
	
	return 0;
}
