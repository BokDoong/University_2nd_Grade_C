#include <stdio.h>

int main() {
	int time, weeks, days;
	
	printf("날짜 입력하시오 : ");
	scanf("%d", &time);
	
	weeks = time / 7;
	days = time % 7;
	
	printf("%d일 --> %d주 %d일 입니다.", time, weeks, days);
}
