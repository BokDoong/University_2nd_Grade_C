#include <stdio.h>

int main() {
	int time, weeks, days;
	
	printf("��¥ �Է��Ͻÿ� : ");
	scanf("%d", &time);
	
	weeks = time / 7;
	days = time % 7;
	
	printf("%d�� --> %d�� %d�� �Դϴ�.", time, weeks, days);
}
