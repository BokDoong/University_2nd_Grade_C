#include <stdio.h>
int is_leapYear(int year);

int main()
{
	int year, month;
	int days = 0;
	
	printf("몇년도를 알고싶으십니까? : ");
	scanf("%d", &year);
	printf("몇월을 알고싶으십니까? :");
	scanf("%d", &month);
	
	if (is_leapYear(year) == 1)
	{
		if (month == 2)
			days = 29;
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
			days = 31;
		else
			days = 30;	
	}
	else
	{
		if (month == 2)
			days = 28;
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
			days = 31;
		else
			days = 30;
	}
	
	printf("%d년의 %d월은 %d일까지있습니다.", year, month, days);
	
}

int is_leapYear(int year)
{
	int res;
	
	if ( year % 400 == 0 || (( year % 4 == 0) && (year % 100 != 0)))
		res = 1;
	else
		res = 0;
	
	return res;
}
//윤년 : 2월이 29일까지 있는 해
//윤년의 조건1) 400으로 나눠떨어지는 해(2000, 1600,..) 
//윤년의 조건2) 4로 나눠떨어지지만 100으로는 나눠떨어지지 않는  해(2000,2100,..)



