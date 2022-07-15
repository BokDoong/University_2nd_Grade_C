#include <stdio.h>
#include <stdlib.h>

int main() {
	int *list;
	int i, students;
	
	printf("切积狼 荐 : ");
	scanf("%d", &students);
	list = (int *)malloc(students * sizeof(int));
	
	for(i=0; i<students; i++) {
		printf("切积 #%d狼 己利 : ", i+1);
		scanf("%d", &list[i]);
	}
	
	printf("\n================\n");
	for(i=0; i<students; i++) {
		printf("切积 #%d狼 己利 : %d\n", i+1, list[i]);
	}
	
	free(list);
}
