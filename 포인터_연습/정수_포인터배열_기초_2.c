#include <stdio.h>

int main() {
	float x[6] = {4.5, 7.7, 8.9, 3.9, 5.8, 6.5};
	float sum = 0., *xp;
	int i;
	
	xp = &x;
	for(i=0; i<6; i++, xp++) {
		printf("%p = %4.1f\n", xp, *xp);
		sum+= *xp;
	}
	//xp�� 4.5�� ����Ų�� -> xp+i �ϳ��� ���������� �̵�
	//���� �������� ���� ������ *���δ�. 
	
	printf("sum = %.2f", sum);
}
