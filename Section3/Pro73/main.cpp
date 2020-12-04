#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	priority_queue<int> Q;
	
	while(true){
		int x;
		scanf("%d", &x);
		if(x == -1) break;
		else if(x == 0){
			if(Q.size() != 0){
				cout << Q.top() << endl;
				Q.pop();
			}
			else cout << -1 << endl;
		}
		else{
			Q.push(x);
		}
	}
	
	
	return 0;
}
