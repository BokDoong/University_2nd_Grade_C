#include <stdio.h>

int main() {
	int i, j, rank;
	int stud[10] = {45, 92, 88, 34, 88, 95, 82, 59, 70, 76};
	
	for(i=0; i<10; i++) {
		//rank=1 �ΰ� �߿�! 
		rank = 1;
		
		for(j=0; j<10; j++) {
			//��ü���� �ش� ������ ū ���� ������ ���+1 
			if(stud[i] < stud[j])
				rank++;
		}
		printf("%d���� ��� : %d��\n", stud[i], rank);
	}
}
