#include <stdio.h>

int main(void) {
	int a, num;
	
	printf("NUMBER ? : ");
	scanf("%d", &num);
	
	a = 2;               //test�μ��� �ʱⰪ ���� 
	while (num >= a*a) {               //sqrt(num)���� num�� ���μ��� Ŭ�������� ���� �̿�. 
		if (num % a == 0) {
			printf("%d * ", a);
			num = num / a;             //a�� �������� : ���μ� �߰� + �� ������ �ٽý��� 
		}
		else
			a++;
	}
	printf("%d\n", num);
	
	return 0; 
}
