#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char arr[10];
	scanf("%s", &arr);
	
	int c = 0;
	int h = 0;
	bool flag = true;
	for(int i=1; arr[i]!='\0'; i++){
		if(flag && arr[i] != 'H'){
			c *= 10;
			c += ( (int)arr[i] - 48 );
		}
		else if(arr[i] == 'H'){
			flag = false;
			continue;
		}
		if(!flag){
			h *= 10;
			h += ( (int)arr[i] - 48 );
		}
	}
	
	c = (c == 0) ? 1 : c;
	h = (h == 0) ? 1 : h;
	//cout << c << " " << h << endl;
	
	cout << 12*c + h;

	return 0;
}
