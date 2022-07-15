#include <stdio.h>

int main(void)
{
	int year = 1996, month = 4, date = 25;     //오늘의 날짜 
	int num = 36600;			//오늘로 부터 n번째 이후의 날짜 
	
	printf("%d년 %d월 %d일의 33000일 후는 : \n", year, month, date);
	
	while (num>0) {								   //num이 0보다 크면 계속 돌려라. 
		if (month == 2) {
			if(is_leapYear(year) == 1){            //윤년의2월일때 
				if (date==29) {          
					month++;
					num--;
					date = 1;
				}                                  //29일이면 month를 1 추가해, 3월로 만들고, num--  
				else {
					date++;
					num--;
				}									//29일아니면 그냥 date+1, num-- 
			}
			else{                                  //평년의 2월일때 
				if(date == 28) {                   
					month++;
					num--;
					date = 1;
				}                                  //28일이면 month를 1 추가해, 3월로 만들고, num--
				else{
					date++;
					num--;
				}                                 //29일아니면 그냥 date+1, num--
			}
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			if(date == 30) {
				month++;
				num--;
				date = 1;                   //30일까지 있는 달의 30일 일때, month는 다음달로, date=1로 만들고 num-- 
			}
			else {
				num--;
				date++;
			}
		}
		else if(month != 12) {
			if (date == 31) {
				month++;
				num--;
				date = 1;                   //12월제외, 31일까지 있는 달의 31일 일때, month는 다음달로, date=1로 만들고 num-- 
			}
			else {
				date++;
				num--;
			}
	}
		else {
			if(date == 31) {
				year++;
				month = 1;
				num--;
				date = 1;                  //12월 31일이면 num--,그리고 month와 date를 1로 초기화 
			}
			else {
				num--;
				date++;
			}	
		}
	}
	printf("%d년 %d월 %d일 \n", year, month, date, num);
	return 0;
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
 
 //해당년도까지 몇번의 윤년이있는가?
 //윤년x : 365일 윤년 o : 366일 => 년도를구하자 
