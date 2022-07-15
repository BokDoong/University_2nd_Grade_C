#include <stdio.h>
int main()
{
	int distance = 149597870, speed = 299792, min, sec;
	
	sec = distance/speed;     //전체 초를 먼저 구한다. 
	min = sec / 60;           //60으로 나눠 분을 구한다. 
	sec = sec % 60;			  //60으로 나눈 나머지로 초를 구한다. 
	
	printf("%d분 %d초\n", min, sec);
}

//1주 = 7일 
