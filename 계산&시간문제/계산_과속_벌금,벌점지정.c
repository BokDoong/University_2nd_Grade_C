#include <stdio.h>

int main()
{
	double speed, speed_dif;
	int pay, min;
	
	printf("현재 시속을 입력하시오 : ");
	scanf("%lf", &speed);
	speed_dif = speed - 100;
	
	if (speed_dif <= 10.) {
		pay = 0;
		min = 0;
	}
	else if (speed_dif <= 20.) {
		pay = 30000;
		min = 0;
	}
	else if (speed_dif <= 40.) {
		pay = 60000;
		min = 15;
	}
	else if (speed_dif <= 60.) {
		pay = 90000;
		min = 30;
	}
	else {
		pay = 120000;
		min = 60;
	}
	
	printf("벌금은 %d원, 벌점은 %d입니다.", pay, min);
}
