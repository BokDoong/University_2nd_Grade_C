#include <stdio.h>

int main() {
	int time, years, months, days;
	
	printf("날짜 입력하시오 : ");
	scanf("%d", &time);
	
	years = time / 365;
	months = (time%365) / 30;
	days = (time%365) % 30;
	
	printf("%d일 --> %d년 %d개월 %d일 입니다.", time, years, months, days);
}
