#include <stdio.h>

//animal[i]�� i�ڸ��� �� ������ ù ���ڸ� ����Ų��.
//animal[][i]�� ���� i�� ����� ���ҵ� ���� ũ��, null�� ����.
//���ڹ迭 : sizeof(animal)�ϸ� animal�� �� ���Ұ��� ����. 
//����[][i] : "����� ������ ����"��ŭ ����ȴ�. 
int main() {
	char animal[][10] = {"monkey", "ant", "elephant", "cat", "sheep"};
	
	int i, j;
	int size = sizeof(animal) / sizeof(animal[0]);
	
	for(i=0; i<size; i++)
		printf("%s  ", animal[i]);     //�� ������ �ܾ� ��� ���. 
	
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%s  ", animal+i);	  //�� ������ �ܾ� ��� ���. 
		
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%d  ", animal[i]);	  //�� ���ڿ��� ���۴ܾ� �ּ� ���. 
		
	printf("\n\n");
	for(i=0; i<size; i++) {
		for(j=0; j<10; j++) {
			printf("%c", animal[i][j]);     //������ ����(10)�� ��� ��°���.(10���� ���̰� �ȵǴ� �͵�
											  //10���� ��������) 
		}
		printf("\n");
	}
 
} 
