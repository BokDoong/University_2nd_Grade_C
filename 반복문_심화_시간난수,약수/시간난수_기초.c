#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	unsigned int i, seed;
	int res=0;
	seed = time(0);       //���� �ʱ�ȭ �Լ��� �Ű������� ������ �ð����� ���� 
	srand(seed);          //���� �ʱ�ȭ
	//srand(time(NULL))�� �ص���. 

	for(i=0; i<5; i++) {
		res = rand()%30 - 15;		 //�ִ� 15, 30�� ����(����) 
		printf("%d\n",rand());		 //���� ���� 
		printf("%d\n",seed);         //���� �ð��� ����Ű�� ���� 
		printf("%d   \n", res); 
	}		
}

//���� �߻������� �� : rand()%���������� ���� + ����num => ���� num���κ��� � 
//���� �߻������� ��_2 : rand()%���������� ���� - ��num  => �� num���κ��� ������ � 
//rand() % 3 : 0,1,2 (0���� ����)

 
