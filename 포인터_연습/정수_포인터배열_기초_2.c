#include <stdio.h>

int main() {
	float x[6] = {4.5, 7.7, 8.9, 3.9, 5.8, 6.5};
	float sum = 0., *xp;
	int i;
	
	xp = &x;
	for(i=0; i<6; i++, xp++) {
		printf("%p = %4.1f\n", xp, *xp);
		sum+= *xp;
	}
	//xp는 4.5를 가리킨다 -> xp+i 하나씩 오른쪽으로 이동
	//숫자 포인터의 값은 무조건 *붙인다. 
	
	printf("sum = %.2f", sum);
}
