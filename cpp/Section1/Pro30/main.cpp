#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	int result = 0;
	cin >> n;
	
	int k = 1;
	int c = 10;
	int h = 3;
	while(1){
		if(n/c > 0){
			int tmp = (n/c)*k;
			result += tmp;
			if( (n%c) - (n%(c/10)) > h ){
				result += k;
			}
			else if( (n%c) - (n%(c/10)) == h ){
				result += (n%(c/10))+1;
			}
		}
		else{
			if( (n%c) - (n%(c/10)) > h ){
				result += k;
			}
			else if( (n%c) - (n%(c/10)) == h ){
				result += (n%(c/10))+1;
			}
			break;
		}
		c *= 10;
		h *= 10;
		k *= 10;
	}
	
	cout << result;
	
	return 0;
}
