//������ ������ �迭 int *�����ͺ���[3] = {�迭1, �迭2, �迭3}
//���� : ������ �迭 ���� = **"�迭���� ����"**
//2���� ���ڹ迭�̶�� ��������. 

#include <stdio.h>

int main() {
	int i, j;
	int ary1[4] = {1, 3, 5, 7};
	int ary2[4] = {11, 13, 15, 17};
	int ary3[4] = {21, 23, 25, 27};
	int *ptr_ary[3] = {ary1, ary2, ary3};
	//ptr_ary[1] = ary2�� ù��° �ڸ� ������
	 
	printf("%d\n", *ptr_ary[1]);		   //index1�� ù° �� ��� 
	printf("%d\n", *ptr_ary[1]+1);
	printf("%d\n\n\n", ptr_ary[1]);        //index1�� ������ "�ּ�" ��� 
	
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d ", *(ptr_ary[i]+j));		//�� �ڸ��� �� ���
//			printf("%d ", ptr_ary[i]+j);        //�� �ڸ��� �ּҰ� ��� 
//			printf("%d ", ptr_ary[i][j]); 		//�� �ڸ��� �� ��� 
//			printf("%d ", *ptr_ary[i]+j);		//�� �������� "ù ��° ��+j" ��� 
		}
		printf("\n");
	}
//	for(i=0; i<3; i++) {
//		printf("%d\n", *ptr_ary[i]);
//	}	
} 
