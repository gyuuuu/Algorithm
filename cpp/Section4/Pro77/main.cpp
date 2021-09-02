#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> matrix(1001);

int Find(int a){
	if(matrix[a] == a) return a;
	else return matrix[a] = Find(matrix[a]);
}

void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	if(a != b){
		matrix[a] = b;
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i=1; i<=n; i++){
		matrix[i] = i;
	}

	int a, b;
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		Union(a,b);
	}
	scanf("%d %d", &a, &b);
	int aa = Find(a);
	int bb = Find(b);
	if(aa == bb) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
