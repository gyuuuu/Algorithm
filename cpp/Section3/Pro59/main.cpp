#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int n;
vector<int> ch(11,0);

void DFS(int L){
	if(L == n+1){
		for(int i=1; i<=n; i++){
			if(ch[i] == 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	else{
		ch[L] = 1;
		DFS(L+1);
		ch[L] = 0;
		DFS(L+1);
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	cin >> n;
	DFS(1);
	return 0;
}
