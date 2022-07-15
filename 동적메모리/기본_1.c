#include <stdio.h>
#include <stdlib.h>

int main() {
	int *x;
	x = (int *)malloc(sizeof(int));
	
	*x = 123;
	printf("x가 가리키는 곳의 값 : %d\n", *x);
	
	free(x);
}
