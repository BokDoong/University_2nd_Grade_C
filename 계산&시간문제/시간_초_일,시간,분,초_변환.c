#include <stdio.h>

int main() {
	unsigned int seconds, sec, min=0, hour=0, day=0;
	printf("계산 할 초를 입력하시오 : ");
	scanf("%d", &seconds);
	
	sec = seconds;
	for( ; sec>=60; sec-=60)
		min++;       //몇분 몇초인지부터 for문으로 구한다 : (sec/60)분 (sec%60)초  
	                 
	for( ; min>=60; min-=60)
		hour++;      //분단위를 hour로 for문으로 구한다 : (min/60)시간 (min<60)분 
	
	for( ; hour>=24; hour-=24)
		day++;
		
	printf("%d초 : %d일 / %02d시 / %02d분 / %02d초\n", seconds, day, hour, min, sec); 
}
