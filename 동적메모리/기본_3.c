#include <stdio.h>
#include <stdlib.h>

int main() {
	int *list;
	int i, students;
	
	printf("�л��� �� : ");
	scanf("%d", &students);
	list = (int *)malloc(students * sizeof(int));
	
	for(i=0; i<students; i++) {
		printf("�л� #%d�� ���� : ", i+1);
		scanf("%d", &list[i]);
	}
	
	printf("\n================\n");
	for(i=0; i<students; i++) {
		printf("�л� #%d�� ���� : %d\n", i+1, list[i]);
	}
	
	free(list);
}
