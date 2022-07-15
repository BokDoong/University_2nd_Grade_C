#include <stdio.h>

int main() {
	int num, length;
	int stud[10] = {45, 92, 88, 34, 88, 95, 82, 59, 70, 76};
	
	printf("���ϴ� ����� �Է��ϼ��� : ");
	scanf("%d", &num); 
	length = sizeof(stud)/sizeof(stud[0]);
	
	int res = Cal_Rank(stud, length, num);
	printf("%d���� ������ %d�� �Դϴ�.\n", num, res);
}

int Cal_Rank(int *array, int size, int target) {
	int i, j, rank;
	
	for(i=0; i<size; i++) {
		//rank=1 �ΰ� �߿�! 
		rank = 1;
		
		for(j=0; j<size; j++) {
			//��ü���� �ش� ������ ū ���� ������ ���+1 
			if(array[i] < array[j])
				rank++;
		}
		if(rank == target)
			return array[i];
	}
}
