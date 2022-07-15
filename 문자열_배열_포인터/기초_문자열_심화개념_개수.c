//char s1[20] = "string!" : 마지막 자리(!) 뒤에 NULL값이 자동으로 저장된다.
//포인터 : char *s3 = "String!" -> s3는 문자열의 첫자리(S)를 가리킨다.

//2차원 문자열 
//char s1[5][20] -> printf("%s", s1[2]) : 출력할땐 하나의 인덱스만 입력해도 자동으로 해당 행 출력
//크기 : 변수 = sizeof(s1)/sizeof(size[0]) 
//char[#]은 각 자리(#)의 첫 시작 문자의 주소가 저장되어있다. 
#include <stdio.h>  

int main() {
	char animal[][10] = {"moneky", "elephant", "ant", "turtle", "tiger"};
	int i, count;
	count = sizeof(animal) / sizeof(animal[0]);
	
	for(i=0; i<count; i++) {
		printf("%c\n", *animal[i]);
		printf("%c\n", animal[i]);
		printf("%d\n", animal[i]);
		printf("%s\n", animal[i]); 
	}
}
