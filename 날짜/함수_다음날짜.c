#include <stdio.h>
int main()
{
	int year, month, date;
	
	printf("��,��,�� �� �Է��Ͻÿ� : ");
	scanf("%d%*c%d%*c%d", &year, &month, &date);
	
	if(year<1900)
		return 0; 
	if(month < 1 || month > 12)
		return 0;
	if(date<1 || date > 31)
		return 0;                 //��,��,���� �� �� 
		
	if (is_leapYear(year) == 1) {                 //�����϶� 
		if (month==1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 ) {
			if (date == 31)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else 
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);	 
		}
		
		if (month == 2) {
			if (date == 29)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
		} 
		
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (date == 30)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else 
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
		}
		
		if (month == 12) {
			if (date == 31)
				printf("���� ���� %d�� 01�� 01���Դϴ�.\n", year+1);
			else
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
    	}
	}
	else {
		if (month==1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 ) {
			if (date == 31)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else 
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);	 
		}
		
		if (month == 2) {
			if (date == 28)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
		} 
		
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (date == 30)
				printf("���� ���� %d�� %d�� 1���Դϴ�.\n", year, month+1);
			else 
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
		}
		
		if (month == 12) {
			if (date == 31)
				printf("���� ���� %d�� 01�� 01���Դϴ�.\n", year+1);
			else
				printf("���� ���� %d�� %d�� %d���Դϴ�.\n", year, month, date+1);
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
 
 
 // 31���� �� : 1,3,5,7,8,10,12
 // 30���� �� : 4,6,9,11
 // 2�� : 28��(�׳�) 29��(����) 
 //12��31�� : �Ϸ� �ڿ� �⵵+1 
