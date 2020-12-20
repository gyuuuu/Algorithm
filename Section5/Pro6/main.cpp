#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct Brick{
	int s, h, w;
	Brick(int a, int b, int c){
		s = a;
		h = b;
		w = c;
	}
	bool operator < (const Brick & other) const{
		return s > other.s;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	vector<Brick> b;
	for(int i=0; i<n; i++){
		int a, h, w;
		scanf("%d %d %d", &a, &h, &w);
		b.push_back(Brick(a, h, w));
	}
	sort(b.begin(), b.end());
	vector<int> dp(n);
	dp[0] = b[0].h;
	
	for(int i=1; i<n; i++){
		int max_h = b[i].h;
		for(int j=i-1; j>=0; j--){
			if(b[i].w < b[j].w){
				max_h = max(max_h, dp[j]+b[i].h);
			}
			else continue;
		}
		dp[i] = max_h;
	}
	
	int answer = -1;
	for(auto & ele: dp){
		answer = max(answer, ele);
		//cout << ele << " ";
	}
	cout << answer;
	return 0;
}
