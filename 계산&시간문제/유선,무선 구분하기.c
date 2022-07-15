#include <stdio.h>

int main() {
	int call_num1, call_num2, call_num3;
	
	printf("전화번호 입력: ");
	scanf("%d%*c%d%*c%d", &call_num1, &call_num2, &call_num3);
	
	printf("0%d,%d,%d\n", call_num1, call_num2, call_num3);
	
	if (call_num1 >= 20 && call_num1 < 70)
		printf("유선전화");
	else if (call_num1 >= 10 && call_num1 < 20)
		printf("무선전화"); 
}
