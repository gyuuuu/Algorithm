#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int s, e;
	scanf("%d %d", &s, &e);
	
	queue<int> Q;
	vector<int> ch(10001);
	Q.push(s);
	ch[s] = 1;
	int d[3] = {1, -1, 5};
	
	while(!Q.empty()){
		int x = Q.front();
		Q.pop();
		for(int i=0; i<3; i++){
			int pos = x + d[i];
			if(pos<=0 || pos>10000) continue;
			if(pos == e){
				cout << ch[x];
				goto A;
			}
			if(ch[pos] == 0){
				ch[pos] = ch[x]+1;
				Q.push(pos);
			}
		}
	}
A:	
	return 0;
}
