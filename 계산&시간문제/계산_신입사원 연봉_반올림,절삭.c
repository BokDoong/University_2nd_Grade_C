#include <stdio.h>

int main() {
	int year=1, annual_salary=24000000;
	int house=100000000, total_save=0;
	double inc=0.045, save_rate=.15, interest=0.05;
	
	do {
		total_save += (int)(annual_salary*save_rate + 0.5) + (int)(total_save*interest);  //매년 저축금액 연봉15%(반올림해서 정수)  + 원금*5% 
		
		printf("%3d년차 연봉 : %10d\t", year, annual_salary);
		printf("저축 금액 : %10d\n", total_save);
		
		if (total_save > house) {
			printf("%d년 만에 집사기 완료", year);
			break;												//집값보다 저축액이 커지면 종료 
		}
		
		annual_salary += (int)(annual_salary*inc+0.5); 
		annual_salary -= annual_salary % 100;              //100미만단위 절삭 
		year++;
		
	} while(1); 
	
}
	
//	do {
//		total_save += (int)(anuual_salary*save_rate+0.5) + (int)(total_save*interest);  //연봉의 15%, 매년 연저축액의 5%저축 
//		
//		printf("%3d년차 연봉 : %10d\t", year, annual_salary);
//		printf("저축 금액 : %10d\n", total_save);
//		
//		if (total_save > house) {
//			printf("%d년 후의 저축액은 %10d입니다.\n", year, total_save);
//			break;
//		}
//		
//		year++;
//		annual_salary += (int)(annual_salary*inc + 0.5);       //연봉은 매년 4.5%씩 증가 
//		annual_salary -= annual_salary % 100;				   //연봉의 100원 미만 절삭 
//	}while(1);
//}

//앞에 (int)+(변수 + 0.5)하면 소숫점 첫째자리에서 반올림하여 정수가 된다. 
