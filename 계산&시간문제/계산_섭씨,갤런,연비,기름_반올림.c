#include <stdio.h>
#include <math.h>

int main() {
	double lit, celcius, km;				//��� : ����,����,km
	int mile = 414, fareheit = 124, gallon = 15;         //�Է� : ȭ��,����,���� 
	double oil;
	
	lit = (double)gallon * 3.7854;
	celcius = (5./9.)*((double)fareheit-32.);
	km = (double)mile * 1.6093;
	oil = km / lit;
	
	printf("ȭ�� %d��= ���� %.1f��.\n", fareheit, celcius); 
	printf("%d���� = %.1f����\n", gallon, lit); 
	printf("%d���� = %.1fų�ι���.\n\n", mile, km); 
	printf("��Ʈī�� ���� =  %.1f\n", oil);
	
}
