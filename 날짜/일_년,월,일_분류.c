#include <stdio.h>

int main() {
	int time, years, months, days;
	
	printf("��¥ �Է��Ͻÿ� : ");
	scanf("%d", &time);
	
	years = time / 365;
	months = (time%365) / 30;
	days = (time%365) % 30;
	
	printf("%d�� --> %d�� %d���� %d�� �Դϴ�.", time, years, months, days);
}
