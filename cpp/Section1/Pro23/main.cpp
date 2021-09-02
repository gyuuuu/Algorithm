#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("in3.txt", "rt", stdin);
	int n, num, result = 0;
	int pre = 0;
	
	scanf("%d", &n);
	
	int max = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		if(pre <= num){
			max++;	
			if(result < max)
				result = max;
		}
		else{
			max = 1;
		}
		pre = num;
	}
	
	//result = (max > result) ? max : result;
	printf("%d", result);
	return 0;
}
