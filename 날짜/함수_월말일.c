#include <stdio.h>
int is_leapYear(int year);

int main()
{
	int year, month;
	int days = 0;
	
	printf("��⵵�� �˰�����ʴϱ�? : ");
	scanf("%d", &year);
	printf("����� �˰�����ʴϱ�? :");
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
	
	printf("%d���� %d���� %d�ϱ����ֽ��ϴ�.", year, month, days);
	
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
//���� : 2���� 29�ϱ��� �ִ� ��
//������ ����1) 400���� ������������ ��(2000, 1600,..) 
//������ ����2) 4�� �������������� 100���δ� ������������ �ʴ�  ��(2000,2100,..)



