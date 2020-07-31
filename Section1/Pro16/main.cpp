#include <stdio.h>

using namespace std;

int main() {
	char str1[100], str2[100];
	scanf("%s", &str1);
	scanf("%s", &str2);
	
	for(int i=0; str1[i]!='\0'; i++){
		int flag = 0;
		for(int j=0; str2[j]!='\0'; j++){
			if(str1[i] == str2[j]){
				str2[j] = '*';
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("%s", "NO");
			
			return 0;
		}
	}
	printf("%s", "YES");
	
	return 0;
}
