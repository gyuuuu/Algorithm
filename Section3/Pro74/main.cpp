#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	//priority_queue<int, vector<int>, greater<int> > pQ; �̰͵� �� �� 
	priority_queue<int> pQ;
	
	while(true){
		int x;
		scanf("%d", &x);
		if(x == -1) break;
		else if(x == 0){
			if(pQ.size() != 0){
				cout << -pQ.top() << endl; // �ٽ� -�� �� 
				pQ.pop();
			}
			else{
				cout << -1 << endl;
			}
		}
		else{
			pQ.push(-x); //������ �ٲ㼭 max heap�� ���� 
		}
	}
	return 0;
}
