//1일:24시간, 1개월:30일*24시간=720시간, 1년:720시간*12개월= 8640
#include <stdio.h>

int main() {
	int time;
	int years, months, days, hours;
	
	printf("계산할 시간을 입력하시오 : ");
	scanf("%d", &hours);
	
	time = hours;
	years = time / 8640;
	months = (time%8640) / 720;
	days = ((time%8640)%720) / 24;
	time = ((time%8640)%720) % 24; 
	
	printf("%d시간 = %d년 %d개월 %d일 %d시간", hours, years, months, days, time); 
} 
