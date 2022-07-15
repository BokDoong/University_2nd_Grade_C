#include <stdio.h>
#include <math.h>
int Zeller_Cal(year, mon, day);

//파일 텍스트 형식 : 981015 1 
int main() {
	int data1, data2;
	int y, m, d, g, k, p, i;
	int date[7] = {0, }; 
	int *week[7] = {"일요일", "월요일", "화요일", "수요일", "목요일", "금요일", "토요일"};
	
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(1) {
		//년/월/일/성별 -> 2,1자리씩 가져온다.
		//y:98, m:10, d:15, g=1
		k = fscanf(fp, "%2d%2d%2d%*c%1d", &y, &m, &d, &g);
		if(k==EOF) break;
		
		//성별 한 자리에 따라 2000년/1900년 구분 +=
		if(g==3 || g==4 || g==7 || g==8)
			y += 2000;
		else
			y += 1900;
		
		//  <조건날 이전에 태어난 사람>
		//g < 5 : 내/외국인 여부 
		//1.해당 년도 이전 태어난 사람 
		if(y<2002 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
		
		//2.같은 해의 이전 달 태어난 사람 
		if(y==2002 && m<6 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
		
		//3.같은 달의 이전 날까지 태어난 사람 
		if(y==2002 && m==6 && d<22 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
	}
	
	//요일별 태어난 사람 수 출력 
	for(i=0; i<7; i++) {
		printf("%s : ", week[i]);
		printf("%d\n", date[i]);
	}
	printf("\n\n");

	//최대값/최소값 구하기 	
	int max_day=0, min_day=0;
	for(i=1; i<7; i++) {
		if(date[i] > date[max_day])
			max_day = i;
		
		if(date[i] < date[min_day])
			min_day = i;
	}
	
	printf("제일 많은 요일 : %s\n", week[max_day]);
	printf("제일 적은 요일 : %s", week[min_day]);
	
	fclose(fp);
	//날짜 비교 및 출력
//	max_pop = date[0];
//	for(i=1; i<7; i++) {
//		if(max_pop < date[i]) {
//			max_pop = date[i];
//			max_date = i;
//		}
//	}
//	
//	printf("가장많은 요일 : %s\n", week[max_date]);
//	printf("몇 명 : %d명\n", max_pop);
}


int Zeller_Cal(int year,int mon,int day) {
	int a, c, weekday;
	
	c=mon;
	a=year;
	
	if(mon==1 || mon==2) {
		c += 12;
		a -= 1;
	}	

	weekday = (21 * (a/100))/4 + (5 * (a%100)) / 4 + (26*(c+1))/10 + day - 1;
	
	return weekday%7;
}
