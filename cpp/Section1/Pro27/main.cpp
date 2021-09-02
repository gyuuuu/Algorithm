#include <stdio.h>
#include <vector>

using namespace std;

bool isPrime(const int n);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d! = ", n);
	
	vector<int> prime;
	vector<int> result;
	
	for(int i=2; i<=n; i++){
		if(isPrime(i)){
			prime.push_back(i);
		}
	}
	
	result.resize(prime.size());
	
//	for(auto & ele : prime)
//		printf("%d ", ele);
	
	for(int i=2; i<=n; i++){
		int idx = 0;
		int num = i;
		
		while(i >= prime[idx]){
			if((num%prime[idx]) == 0){
				result[idx]++;
				if(num/prime[idx] >= 1)
					num /= prime[idx];
			}
			else{
				idx++;
				num = i;
			}
			if(idx+1 > prime.size())	break;
		}			
	}
	
	for(auto & ele : result)
		printf("%d ", ele);
	
	return 0;
}

bool isPrime(const int n){
	int count = 0;
	
	for(int i=1; i<=n; i++){
		if(n%i == 0)
			count++;
	}
	
	if(count == 2)
		return true;
	else
		return false;
}
