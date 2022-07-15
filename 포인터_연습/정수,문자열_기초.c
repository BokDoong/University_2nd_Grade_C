#include <stdio.h>

int main() {
	int i, num = 10;
	int *pos; 
	char ch[] = "char";         //ch는 "char"의 첫 인덱스인 "c"를 가리킨다.
	
	pos = &num;
	printf("%d\n", num);
	printf("%d\n", pos);		//포인터 주소 
	printf("%d\n", *pos);       //포인터 값 
	
	printf("%s\n", ch);        //%s : *주지 않아도 모든 문자를 출력한다.
	printf("%s\n", ch+1);      //'ch+1'자리인 h부터 문자를 출력한다.
	 
	printf("%d\n", ch);		   //%d : ch의 주소인 첫 인덱스의 주소를 출력 
	printf("%d\n", ch+1);      //ch+1인 "h"의 주소 출력. 
	
	int size = sizeof(ch)/sizeof(ch[0]);      //문자열의 크기 저장. 
	for(i=0; i<size; i++)
		printf("%c", *(ch+i));      
	
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%d  ", ch+i);
}
