#include <stdio.h>
#include <string>

using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	
	char id[15];
	int year, age;
	char sex;
	
	scanf("%s", id);
	
	if(id[7] == '1' || id[7] == '2')
		year = 1900 + ( (id[0]-48) *10 ) + ( (id[1]-48) ); // 0의 아스키 코드값은 48 
	else
		year = 2000 + ( (id[0]-48) *10 ) + ( (id[1]-48) );
		
	age = 2019-year+1;
	
	if(id[7] == '1' || id[7] == '3')
		sex = 'M';
	else
		sex = 'W';
	
	printf("%d %c", age, sex);
	
	return 0;
}
