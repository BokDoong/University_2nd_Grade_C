#include <stdio.h>
#include <stdlib.h>

int main() {
	int *list;
	int i, students, sum = 0;
	double avg;
	
	printf("�л��� �� : ");
	scanf("%d", &students);
	list = (int *)malloc((students+2) * sizeof(int));
	//list = (int *)malloc(students+2, sizeof(int));
	
	for(i=0; i<students; i++) {
		printf("�л� #%d�� ���� : ", i+1);
		scanf("%d", &list[i]);
	}
	
	printf("\n================\n");
	for(i=0; i<students; i++) {
		printf("�л� #%d�� ���� : %d\n", i+1, list[i]);
	}
	
	for(i=0; i<students; i++)
		sum += list[i];
//		sum += *(list+i);

	avg = sum / (double)students;
	printf("\n�л��� ��� : %f\n", avg);
		
	free(list);
}
