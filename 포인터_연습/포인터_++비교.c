#include <stdio.h>

int main() {
	int a[5] = {10, 20, 30, 40, 50};
	int b = 17;
	int *p = a;
	
	printf("*p : %d\n", *p);
	printf("++p : %d\n", *++p); 		
	//따로 출력하면 정상적으로 나온다. 
	printf("*++p : %d %d %d\n", *++p, *p+1, *++p);
	//포인터 형식 : 한번에 하면 스택형식으로 되어서 뒤의 결과부터 출력 
	printf("b++ : %d %d %d\n", ++b, b+1, b++);
	//컴파일 형식 : 그대로 연산하여 출력 
}
