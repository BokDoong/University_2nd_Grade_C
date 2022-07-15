#include <stdio.h>

int main(void) {
	int a, num;
	
	printf("NUMBER ? : ");
	scanf("%d", &num);
	
	a = 2;               //test인수의 초기값 설정 
	while (num >= a*a) {               //sqrt(num)보다 num의 소인수가 클수가없는 것을 이용. 
		if (num % a == 0) {
			printf("%d * ", a);
			num = num / a;             //a로 나눠질때 : 소인수 추가 + 그 몫으로 다시실행 
		}
		else
			a++;
	}
	printf("%d\n", num);
	
	return 0; 
}
