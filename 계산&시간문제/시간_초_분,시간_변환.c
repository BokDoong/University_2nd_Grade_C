//1�� 1��:60�� 1�ð�:3600��
#include <stdio.h>

int main() {
	int time;
	int hour, min, sec;
	
	printf("����� �ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &time);
	hour = time / 3600;
	min = (time%3600) / 60;
	sec = (time%3600) % 60;
	
	printf("%d�� = %02d��:%02d��:%02d��", time, hour, min, sec);
	//%02d : ���ڸ����� ����ϰ����ش�. 
	//%2d : �� �ڸ��� ����� ����ϰ����ش�. 
} 
