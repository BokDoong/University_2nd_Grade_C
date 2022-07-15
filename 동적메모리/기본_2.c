#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *list, size=3, i;
	list = (int *)malloc(size * sizeof(int));
	int list[3]
	
	for(i=0; i<size; i++) {
		list[i] = 10+i;
		printf("%3d\n", list[i]);
	}
	list+1
	printf("\n\n");
	for(i=0; i<size; i++) {
		*(list+i) = 20+i;
		printf("%3d", list[i]);
	}
	free(list);
}
