#include <stdio.h>

int main() {
	unsigned int seconds, sec, min=0, hour=0, day=0;
	printf("��� �� �ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &seconds);
	
	sec = seconds;
	for( ; sec>=60; sec-=60)
		min++;       //��� ������������ for������ ���Ѵ� : (sec/60)�� (sec%60)��  
	                 
	for( ; min>=60; min-=60)
		hour++;      //�д����� hour�� for������ ���Ѵ� : (min/60)�ð� (min<60)�� 
	
	for( ; hour>=24; hour-=24)
		day++;
		
	printf("%d�� : %d�� / %02d�� / %02d�� / %02d��\n", seconds, day, hour, min, sec); 
}
