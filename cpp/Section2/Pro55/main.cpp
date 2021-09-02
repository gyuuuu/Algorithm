#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	stack<int> s;
	int n, train;
	cin >> n;
	vector<char> str;
	
	vector<int> Bcity(n);
	for(int i=0; i<n; i++)
		Bcity[i] = i+1;
		
	int Bcity_idx = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &train);
		s.push(train);
		str.push_back('P');
		while(1){
			if(s.top() == Bcity[Bcity_idx]){
				s.pop();
				Bcity_idx++;
				str.push_back('O');
			}
			else break;
			if(s.empty()) break;
		}
	}
	
	if(!s.empty()) printf("impossible");
	else{
		for(auto & ele: str)
			cout << ele;
	}
	
	
	return 0;
}
