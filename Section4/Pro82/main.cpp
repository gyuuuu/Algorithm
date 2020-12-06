#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr(20);
vector<int> ch(20);
vector<int> answer(20);
int n, r, cnt=0;

void DFS(int s, int e){
	if(s == e){
		for(int i=0; i<s; i++){
			cout << answer[i] << " ";
		}
		cnt++;
		cout << endl;
	}
	else{
		for(int i=1; i<=n; i++){
			if(ch[i] == 0){
				answer[s] = arr[i];
				ch[i] = 1;
				DFS(s+1, e);
				ch[i] = 0;
			}
		}
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &r);
	
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}

	DFS(0, r);
	cout << cnt << endl;
	return 0;
}
