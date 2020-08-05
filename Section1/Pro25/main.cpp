#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	vector<int> scores(n);
	vector<int> grades(n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &scores[i]);
	}
	
	for(int i=0; i<n; i++){
		int grade = 1;
		for(int j=0; j<n; j++){
			if(i != j){
				if(scores[i] < scores[j])
					grade++;
			}
			else
				continue;
		}
		grades[i] = grade;
	}
	
	for(int i=0; i<n; i++)
		printf("%d ", grades[i]);
	
	return 0;
}
