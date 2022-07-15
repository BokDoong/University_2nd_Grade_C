#include <stdio.h>;

int main(void)
{
	int time;
	printf("����� �ð��� �Է��Ͻÿ� : ");
	scanf("%d", &time);
	
	int year = 1996, month = 4, date = 25;     //������ ��¥
	int num = time / 24;			//���÷� ���� n��° ������ ��¥
	int hours = time % 24;
	
	printf("%d�� %d�� %d���� %d�ð� �Ĵ� : \n", year, month, date, hours);
	
	while (num>0) {								   //num�� 0���� ũ�� ��� ������. 
		if (month == 2) {
			if(is_leapYear(year) == 1){            //������2���϶� 
				if (date==29) {          
					month++;
					num--;
					date = 1;
				}                                  //29���̸� month�� 1 �߰���, 3���� �����, num--  
				else {
					date++;
					num--;
				}									//29�Ͼƴϸ� �׳� date+1, num-- 
			}
			else{                                  //����� 2���϶� 
				if(date == 28) {                   
					month++;
					num--;
					date = 1;
				}                                  //28���̸� month�� 1 �߰���, 3���� �����, num--
				else{
					date++;
					num--;
				}                                 //29�Ͼƴϸ� �׳� date+1, num--
			}
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			if(date == 30) {
				month++;
				num--;
				date = 1;                   //30�ϱ��� �ִ� ���� 30�� �϶�, month�� �����޷�, date=1�� ����� num-- 
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
				date = 1;                   //12������, 31�ϱ��� �ִ� ���� 31�� �϶�, month�� �����޷�, date=1�� ����� num-- 
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
				date = 1;                  //12�� 31���̸� num--,�׸��� month�� date�� 1�� �ʱ�ȭ 
			}
			else {
				num--;
				date++;
			}	
		}
	}
	printf("%d�� %d�� %d�� %d��\n", year, month, date, hours);
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
 

 //�ش�⵵���� ����� �������ִ°�?
 //����x : 365�� ���� o : 366�� => �⵵�������� 
