#include <stdio.h>

//���� �����͹迭�� ���� �����Ϳ� ����������,
//*�� ���ָ� �ּڰ��� ��� �ȴ� 
int main() {
	int ary1[4] = {1, 3, 5, 7};
	int ary2[4] = {11, 13, 15, 17}; 
	int ary3[4] = {21, 23, 25, 27}; 
	int *ptr_ary[3] = {ary1, ary2, ary3};
	int i, j;
	
	for(i=0; i<3; i++) {
		printf("%d  ", *(ptr_ary[i]));              //�� ���� �����迭�� ù �ڸ� ��� 
	}												//ptr_ary[i]�� �� i�� ù �ڸ��� ����Ű�� �ִ�. 
	
	printf("\n\n");
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", ptr_ary[i]+j);   		//�� �ڸ��� �ּҰ� ���
		}								//ptr_ary[i]+j �� �� ���� i�� +j�� �ڸ��� ����Ű�� �ִ�.
		printf("\n");
	} 
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", *(ptr_ary[i]+j));  		// �� �ڸ��� ���� ��� 			
		}
		printf("\n");
	}
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", *(ptr_ary[i])+j);  		// �� �ڸ��� ���� +j�� ����� ��� 			
		}
		printf("\n");
	} 
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", ptr_ary[i][j]);  		//2���� �迭ó���ϸ� *���� �� ��°���.			
		}
		printf("\n");
	}
}
