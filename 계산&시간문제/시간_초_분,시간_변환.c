//1초 1분:60초 1시간:3600초
#include <stdio.h>

int main() {
	int time;
	int hour, min, sec;
	
	printf("계산할 초를 입력하시오 : ");
	scanf("%d", &time);
	hour = time / 3600;
	min = (time%3600) / 60;
	sec = (time%3600) % 60;
	
	printf("%d초 = %02d시:%02d분:%02d초", time, hour, min, sec);
	//%02d : 두자릿수로 출력하게해준다. 
	//%2d : 두 자리씩 띄워서 출력하게해준다. 
} 
