//1��:24�ð�, 1����:30��*24�ð�=720�ð�, 1��:720�ð�*12����= 8640
#include <stdio.h>

int main() {
	int time;
	int years, months, days, hours;
	
	printf("����� �ð��� �Է��Ͻÿ� : ");
	scanf("%d", &hours);
	
	time = hours;
	years = time / 8640;
	months = (time%8640) / 720;
	days = ((time%8640)%720) / 24;
	time = ((time%8640)%720) % 24; 
	
	printf("%d�ð� = %d�� %d���� %d�� %d�ð�", hours, years, months, days, time); 
} 
