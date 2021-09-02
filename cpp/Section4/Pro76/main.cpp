#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > ch(21, vector<int>(21));

int DFS(int n, int r){
	if(ch[n][r] != 0) return ch[n][r];
	if(r == 0 || n == r){
		return 1;
	}
	else{
		return ch[n][r] = DFS(n-1, r) + DFS(n-1, r-1);
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n, r;
	scanf("%d %d", &n, &r);
	
	cout << DFS(n, r);

	return 0;
}
