#include <stdio.h>
#include <stdlib.h>

int main() {
	int *x;
	x = (int *)malloc(sizeof(int));
	
	*x = 123;
	printf("x�� ����Ű�� ���� �� : %d\n", *x);
	
	free(x);
}
