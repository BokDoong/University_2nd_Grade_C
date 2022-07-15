#include <stdio.h>
int main()
{
	int year, month, date;
	
	printf("년,월,일 을 입력하시오 : ");
	scanf("%d%*c%d%*c%d", &year, &month, &date);
	
	if(year<1900)
		return 0; 
	if(month < 1 || month > 12)
		return 0;
	if(date<1 || date > 31)
		return 0;                 //년,월,일의 조 건 
		
	if (is_leapYear(year) == 1) {                 //윤년일때 
		if (month==1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 ) {
			if (date == 31)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else 
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);	 
		}
		
		if (month == 2) {
			if (date == 29)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
		} 
		
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (date == 30)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else 
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
		}
		
		if (month == 12) {
			if (date == 31)
				printf("다음 날은 %d년 01월 01일입니다.\n", year+1);
			else
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
    	}
	}
	else {
		if (month==1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 ) {
			if (date == 31)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else 
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);	 
		}
		
		if (month == 2) {
			if (date == 28)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
		} 
		
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (date == 30)
				printf("다음 날은 %d년 %d월 1일입니다.\n", year, month+1);
			else 
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
		}
		
		if (month == 12) {
			if (date == 31)
				printf("다음 날은 %d년 01월 01일입니다.\n", year+1);
			else
				printf("다음 날은 %d년 %d월 %d일입니다.\n", year, month, date+1);
    	}
	}	
	 
}

 int is_leapYear(int year)
 {
 	int leap;
 	if (year%400 == 0 || (year%100)&&(year%4==0))
 		leap = 1;
 	else
 		leap = 0;
 		
 	return leap;
 }
 
 
 // 31일인 달 : 1,3,5,7,8,10,12
 // 30일인 달 : 4,6,9,11
 // 2월 : 28일(그냥) 29일(윤년) 
 //12월31일 : 하루 뒤엔 년도+1 
