#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


//���ӵ� �ڿ����� a, a+1, a+2, ... �̷������� ǥ�� ���� 
//ex 15 = a + a+1 --> 2a+1 --> 2�� �������� �� �������� 1
//ex 15 = a + a+1 + a+2 --> 3a+3 3���� �������� �� �������� 3 ��, 0
// -> �ڿ��� n�� ���ӵ� �ڿ����� ǥ������ �� n�� a�� ����� ���� �������� ������̸� ǥ������. 
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	int cnt = 0;
	scanf("%d", &n);
	
	int k = 1; // ������ 
	int l = 2; // �������� ���� �� 
	for(int i=2; i<n; i++){
		if( (n%i) == (k%i) ){ // ǥ�� ���� 
			int mid = n/i;
			int idx = i/2;
			
			if(i%2 == 0) idx--; // ¦������ ���
			
			if(mid-idx <= 0) break; //ex 15 = a + a+1 + a+2 ... �϶� a�� 0���� �̸� Ż�� (�������� �ڿ����� ������ ǥ���϶�� ��)
			
			printf("%d", mid-idx);
			for(int j=1; j<i; j++){
				printf(" + %d", mid-idx+j);
			}
			printf(" = %d\n", n);
			cnt++;
		}
		k += l;
		l++;
	}
	printf("%d", cnt);
	
	return 0;
}
