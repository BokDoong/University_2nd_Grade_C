#include <stdio.h>

//���� ������ �迭�� 2���� �迭ó�� Ȱ�� ����. 
int main() {
	int ary1[5] = {10, 15, 20, 45, };
	int ary2[5] = {30, 25, 40, 95, };
	int i, j;
	
	int (*pa)[2] = {ary1, ary2};
	for(i=0; i<2; i++) {
		for(j=0; j<4; j++) {
			pa[i][4] += pa[i][j]; 
		}
	}
	
	for(i=0; i<2; i++) {
		for(j=0; j<=4; j++) {
			printf("%d  ", *(pa[i]+j));
		}
		printf("\n");
	}
	
	printf("\n\n");
	int *pb[2] = {ary1, ary2}; 

	for(i=0; i<2; i++) {
		for(j=0; j<4; j++) {
			pb[i][4] += pb[i][j]; 
		}
	}
	
	for(i=0; i<2; i++) {
		for(j=0; j<=4; j++) {
			printf("%d  ", *(pb[i]+j));
		}
		printf("\n");
	}
} 
