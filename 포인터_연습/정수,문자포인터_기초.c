#include <stdio.h>

int main() {
	int a = 10; 
	int* b = 100;
	int *c;
	char d[] = "good"; 
	char* ch = "char";
	char* test; 
	
	//문자 포인터
	printf("%s\n", ch);			   //ch는 "char"을 저장하고 있지만, 포인터는 첫 자리인 "c"를 가리킨다. 
	printf("%s\n", ch+1);          //ch+# 은 각자리의 포인터를 하나씩 뒤로 이동한다. 
	test = &d;
	printf("%s\n", test);          //문자포인터는 *로 값을 가리키는 것을 안해도 값이 출력됨.
	printf("%s\n", test+1); 
	printf("%d\n", test); 
	
	printf("\n\n");
	//정수 포인터 
	printf("%d\n", b);	
	c = &a;        
	printf("%d\n", c);       //c가 가리키는 주소 출력 
	printf("%d\n", *c);		 //c가 가리키는 곳의 값을 출력 
} 
