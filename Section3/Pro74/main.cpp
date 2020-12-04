#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	//priority_queue<int, vector<int>, greater<int> > pQ; 이것도 가 능 
	priority_queue<int> pQ;
	
	while(true){
		int x;
		scanf("%d", &x);
		if(x == -1) break;
		else if(x == 0){
			if(pQ.size() != 0){
				cout << -pQ.top() << endl; // 다시 -붙 임 
				pQ.pop();
			}
			else{
				cout << -1 << endl;
			}
		}
		else{
			pQ.push(-x); //음수로 바꿔서 max heap에 넣음 
		}
	}
	return 0;
}
